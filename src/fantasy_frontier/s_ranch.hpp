#ifndef XLELIB_FF_S_RANCH_HPP
#define XLELIB_FF_S_RANCH_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Ranch table errors. */
		class S_RanchError : public std::exception {
			public:
				/* Create an error with given message. */
				S_RanchError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Ranch table type. */
		class S_Ranch : public Table {
			public:
				/* Create an empty S_Ranch table without header. */
				S_Ranch();
				
				/* Read the S_Ranch table from a given file. */
				S_Ranch(std::string input_file);
				
				/* Delete the S_Ranch table. Does not delete any attached files. */
				virtual ~S_Ranch();
		};
	}
}

#endif
