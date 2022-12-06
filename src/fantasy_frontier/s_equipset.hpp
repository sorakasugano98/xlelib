#ifndef XLELIB_FF_S_EQUIPSET_HPP
#define XLELIB_FF_S_EQUIPSET_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EquipSet table errors. */
		class S_EquipSetError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EquipSetError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EquipSet table type. */
		class S_EquipSet : public Conversion<S_EquipSet> {
			public:
				/* Create an empty S_EquipSet table without header. */
				S_EquipSet();
				
				/* Read the S_EquipSet table from a given file. */
				S_EquipSet(std::string input_file);
				
				/* Delete the S_EquipSet table. Does not delete any attached files. */
				virtual ~S_EquipSet();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
