#ifndef XLELIB_TABLE_HPP
#define XLELIB_TABLE_HPP

#include <vector>
#include <map>
#include <utility>
#include <fstream>
#include <locale>

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
			/* Enumeration for different types of tables. */
			enum class FileType {
				UNKNOWN,
				NONE,
				PIPE_DELIMITED,
				COMMA_DELIMITED
			};
			
			/* Create an empty table without header. */
			Table();
			
			/* Read the table from a given file. */
			Table(std::string input_file);
			
			/* Delete the table. Does not delete any attached files. */
			virtual ~Table();
			
			/* Read the table from a file.
			   Input is the file name (including path). */
			void read(std::string file_name);
			
			/* Write the table to a file.
			   First input is the file name (including path).
			   Second (optional) input is the file type (pipe, comma, no header).
			   Third (optional) input is true if the table should be printed in reversed order. */
			void write(std::string file_name, FileType file_type = FileType::PIPE_DELIMITED, bool reverse = false);
			
			/* Remove empty entries, where only the id exists. */
			void clean();
			
			/* Set the locale to use with the table. */
			void set_table_locale(std::string loc);
			
			/* Change the table version and length by resizing the table and either adding empty columns or removing existing columns at the end.
			   Be careful, this operation may discard data!
			   First input is the new version for the table after resizing.
			   Second input is the new length of the table after resizing (including id). */
			void resize_at_end(std::wstring new_version, unsigned long long new_length);
			
			/* Convert the table to a given version.
			   First input is the target version.
			   Second input is the target length.
			   DO NOT USE! THIS FUNCTION CAN ONLY BE USED FROM DERIVED CLASSES! */
			virtual void convert(std::wstring target_version, unsigned long long target_length) {
				throw TableError("Convert function called in base class!");
			}
			
			/* Content of the table. */
			std::map<unsigned long long, std::vector<std::wstring>> content;
			
			/* Version of the table. */
			std::wstring version;
			
			/* Length of an entry (including the id). */
			unsigned long long length;
			
			/* Locale for the table. */
			std::string locale;
	};
}

#endif
