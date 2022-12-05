#ifndef XLELIB_FF_S_MISSION_HPP
#define XLELIB_FF_S_MISSION_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Mission table errors. */
		class S_MissionError : public std::exception {
			public:
				/* Create an error with given message. */
				S_MissionError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Mission table type. */
		class S_Mission : public Table {
			public:
				/* Create an empty S_Mission table without header. */
				S_Mission();
				
				/* Read the S_Mission table from a given file. */
				S_Mission(std::string input_file);
				
				/* Delete the S_Mission table. Does not delete any attached files. */
				virtual ~S_Mission();
		};
	}
}

#endif
