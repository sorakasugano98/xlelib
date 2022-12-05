#ifndef XLELIB_FF_S_TITLE_HPP
#define XLELIB_FF_S_TITLE_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Title table errors. */
		class S_TitleError : public std::exception {
			public:
				/* Create an error with given message. */
				S_TitleError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Title table type. */
		class S_Title : public Table {
			public:
				/* Create an empty S_Title table without header. */
				S_Title();
				
				/* Read the S_Title table from a given file. */
				S_Title(std::string input_file);
				
				/* Delete the S_Title table. Does not delete any attached files. */
				virtual ~S_Title();
		};
	}
}

#endif
