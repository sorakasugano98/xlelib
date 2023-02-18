#ifndef XLELIB_TTABLE_HPP
#define XLELIB_TTABLE_HPP

#include <vector>
#include <map>
#include <utility>
#include <fstream>
#include <locale>

#include "xlelib.hpp"

namespace XLELib {
	/* Exception to handle table errors. */
	class TTableError : public std::exception {
		public:
			/* Create an error with given message. */
			TTableError(std::string msg);
			
			/* Give the error message. */
			const char* what() const throw();
			
		private:
			/* Error message. */
			std::string error;
	};
	
	/* Class to handle the translation table type. */
	class TTable {
		public:
			/* Enumeration for different types of translation tables. */
			enum class FileType {
				UNKNOWN,
				VERSION_FIRST,
				VERSION_SECOND
			};
			
			/* Create an empty translation table without header. */
			TTable();
			
			/* Read the translation table from a given file. */
			TTable(std::string input_file);
			
			/* Read the translation table from a given file with a specified locale. */
			TTable(std::string input_file, std::string read_locale);
			
			/* Delete the translation table. Does not delete any attached files. */
			virtual ~TTable();
			
			/* Read the translation table from a file.
			   Input is the file name (including path). */
			void read(std::string file_name);
			
			/* Write the translation table to a file.
			   Input is the file name (including path). */
			void write(std::string file_name, FileType file_type = FileType::VERSION_SECOND);
			
			/* Remove empty entries, where only the id exists. */
			void clean();
			
			/* Set the locale to use with the table. */
			void set_table_locale(std::string loc);
			
			/* Content of the table. */
			std::map<unsigned long long, std::vector<std::wstring>> content;
			
			/* Version of the table. */
			std::wstring version;
			
			/* Length of an entry (including the id). */
			unsigned long long length;
			
			/* Corresponding column numbers for the translated table. */
			std::vector<unsigned long long> translated_columns;
			
			/* Locale for the table. */
			std::string locale;
			
	};
}

#endif
