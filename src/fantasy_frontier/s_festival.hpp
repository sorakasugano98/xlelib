#ifndef XLELIB_FF_S_FESTIVAL_HPP
#define XLELIB_FF_S_FESTIVAL_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Festival table errors. */
		class S_FestivalError : public std::exception {
			public:
				/* Create an error with given message. */
				S_FestivalError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Festival table type. */
		class S_Festival : public Table {
			public:
				/* Create an empty S_Festival table without header. */
				S_Festival();
				
				/* Read the S_Festival table from a given file. */
				S_Festival(std::string input_file);
				
				/* Delete the S_Festival table. Does not delete any attached files. */
				virtual ~S_Festival();
		};
	}
}

#endif
