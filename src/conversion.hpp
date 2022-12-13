#ifndef XLELIB_CONVERSTION_HPP
#define XLELIB_CONVERSTION_HPP

#include <set>

#include "xlelib.hpp"
#include "table.hpp"

namespace XLELib {
	/* Exception to handle conversion errors. */
	class ConversionError : public std::exception {
		public:
			/* Create an error with given message. */
			ConversionError(std::string msg) {
				error = "[XLELib ConversionError] " + msg;
			}
			
			/* Give the error message. */
			const char* what() const throw() {
				return error.c_str();
			}
			
		private:
			/* Error message. */
			std::string error;
	};
	
	/* Class to handle table conversion.
	   Intented for use in combination with the Table class in a derived class. */
	template<typename T>
	class Conversion : public Table {
		public:
			/* Type to store conversion paths. */
			struct ConversionPath {
				std::wstring current_version;
				unsigned long long current_length;
				std::wstring target_version;
				unsigned long long target_length;
				void (T::*conversion_function)();
				
				/* Comparison for ConversionPath to use in sets. */
				inline bool operator<(const ConversionPath &r) const {
					if(current_version != r.current_version) {
						return current_version < r.current_version;
					}
					if(current_length != r.current_length) {
						return current_length < r.current_length;
					}
					if(target_version != r.target_version) {
						return target_version < r.target_version;
					}
					return target_length < r.target_length;
				}
			};
			
			/* Create a conversion instance. */
			Conversion() : Table() {
				
			}
			
			/* Create a conversion instance. */
			Conversion(std::string input_file) : Table(input_file) {
				
			}
			
			/* Delete the conversion instance. */
			virtual ~Conversion() {
				
			}
			
			/* Convert the table to a given version.
			   First input is the target version.
			   Second input is the target length. */
			void convert(std::wstring target_version, unsigned long long target_length) {
				if(this->version == target_version && this->length == target_length) {
					return;
				}
				std::vector<ConversionPath> best_path = find_conversion_path({}, conversions, this->version, this->length, target_version, target_length);
				if(best_path.size() == 0) {
					throw ConversionError("Unable to find a conversion method from version " + std::string(this->version.begin(), this->version.end()) + "_" + std::to_string(this->length) + " to version " + std::string(target_version.begin(), target_version.end()) + "_" + std::to_string(target_length) + ".");
				}
				for(int i = 0; i < best_path.size(); i++) {
					(class_pointer->*(best_path[i].conversion_function))();
				}
			}
			
			/* Recursive support function for conversion pathfinding.
			   Use `void convert()` instead.
			   First input is the used path.
			   Second input contains all unused conversion functions.
			   Third input is the version in the current conversion step.
			   Fourth input is the length in the current conversion step.
			   Fifth input is the target version of the conversion.
			   Sixth input is the target length of the conversion. */
			std::vector<ConversionPath> find_conversion_path(std::vector<ConversionPath> used_path, std::set<ConversionPath> unused_functions, std::wstring current_version, unsigned long long current_length, std::wstring target_version, unsigned long long target_length) {
				if(current_version == target_version && current_length == target_length) {
					return used_path;
				}
				std::vector<ConversionPath> return_path;
				bool first = true;
				for(typename std::set<ConversionPath>::iterator i = unused_functions.begin(); i != unused_functions.end(); i++) {
					if(i->current_version == current_version && i->current_length == current_length) {
						std::vector<ConversionPath> up = used_path;
						std::set<ConversionPath> uf = unused_functions;
						up.push_back(*i);
						uf.erase(*i);
						up = find_conversion_path(up, uf, i->target_version, i->target_length, target_version, target_length);
						if(up.size() > 0) {
							if((first || return_path.size() > up.size()) && up[up.size() - 1].target_version == target_version && up[up.size() - 1].target_length == target_length) {
								first = false;
								return_path = up;
							}
						}
					}
				}
				return return_path;
			}
			
			/* Available conversion methods. */
			std::set<ConversionPath> conversions;
			
			/* Pointer to the derived class. */
			T* class_pointer;
	};
}

#endif
