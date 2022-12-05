#ifndef XLELIB_FF_S_CHARCOLOR_HPP
#define XLELIB_FF_S_CHARCOLOR_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CharColor table errors. */
		class S_CharColorError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CharColorError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CharColor table type. */
		class S_CharColor : public Table {
			public:
				/* Create an empty S_CharColor table without header. */
				S_CharColor();
				
				/* Read the S_CharColor table from a given file. */
				S_CharColor(std::string input_file);
				
				/* Delete the S_CharColor table. Does not delete any attached files. */
				virtual ~S_CharColor();
		};
	}
}

#endif
