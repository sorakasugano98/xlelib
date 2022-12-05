#ifndef XLELIB_FF_S_HUNTER_HPP
#define XLELIB_FF_S_HUNTER_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Hunter table errors. */
		class S_HunterError : public std::exception {
			public:
				/* Create an error with given message. */
				S_HunterError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Hunter table type. */
		class S_Hunter : public Table {
			public:
				/* Create an empty S_Hunter table without header. */
				S_Hunter();
				
				/* Read the S_Hunter table from a given file. */
				S_Hunter(std::string input_file);
				
				/* Delete the S_Hunter table. Does not delete any attached files. */
				virtual ~S_Hunter();
		};
	}
}

#endif
