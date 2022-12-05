#ifndef XLELIB_FF_S_TEXTLIMIT_HPP
#define XLELIB_FF_S_TEXTLIMIT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_TextLimit table errors. */
		class S_TextLimitError : public std::exception {
			public:
				/* Create an error with given message. */
				S_TextLimitError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_TextLimit table type. */
		class S_TextLimit : public Table {
			public:
				/* Create an empty S_TextLimit table without header. */
				S_TextLimit();
				
				/* Read the S_TextLimit table from a given file. */
				S_TextLimit(std::string input_file);
				
				/* Delete the S_TextLimit table. Does not delete any attached files. */
				virtual ~S_TextLimit();
		};
	}
}

#endif
