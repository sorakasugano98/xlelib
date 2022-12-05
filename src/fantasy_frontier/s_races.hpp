#ifndef XLELIB_FF_S_RACES_HPP
#define XLELIB_FF_S_RACES_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Races table errors. */
		class S_RacesError : public std::exception {
			public:
				/* Create an error with given message. */
				S_RacesError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Races table type. */
		class S_Races : public Table {
			public:
				/* Create an empty S_Races table without header. */
				S_Races();
				
				/* Read the S_Races table from a given file. */
				S_Races(std::string input_file);
				
				/* Delete the S_Races table. Does not delete any attached files. */
				virtual ~S_Races();
		};
	}
}

#endif
