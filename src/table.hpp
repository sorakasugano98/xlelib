#ifndef XLELIB_TABLE_HPP
#define XLELIB_TABLE_HPP

#include <vector>
#include <map>

#include "xlelib.hpp"

namespace XLELib {
	/* Exception to handle table errors. */
	class TableError : public std::exception {
		public:
			/* Create an error with given message. */
			TableError(std::string msg);
			
			/* Give the error message. */
			const char* what() const throw();
			
		private:
			/* Error message. */
			std::string error;
	};
	
	/* Class to handle the common table type. */
	class Table {
		public:
			/* Create an empty table without header. */
			Table();
			
			/* Read the table from a given file. */
			Table(std::string input_file);
			
			/* Delete the table. Does not delete any attached files. */
			virtual ~Table();
			
			/* Class to store the table data. */
			class Data {
				public:
					/* Overloading the array access. */
					std::vector<std::wstring>& operator[](unsigned long long index);
					std::vector<std::wstring>& operator[](std::wstring index);
					std::vector<std::wstring>& operator[](std::string index);
					
					/* Redirect "at" access to operator[]). */
					std::vector<std::wstring>& at(unsigned long long index);
					std::vector<std::wstring>& at(std::wstring index);
					std::vector<std::wstring>& at(std::string index);
					
					/* Support for size query. */
					unsigned long long size();
					
					/* The table data itself. */
					std::map<unsigned long long, std::vector<std::wstring>> content;
					
					/* Length of the data vector (excluding the id). */
					unsigned long long length;
			};
			
			/* Remove empty entries, where only the id exists. */
			void clean();
			
			/* Content of the table. */
			Data content;
			
			/* Version of the table. */
			std::wstring version;
	};
}

#endif
