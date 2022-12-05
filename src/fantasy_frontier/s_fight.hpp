#ifndef XLELIB_FF_S_FIGHT_HPP
#define XLELIB_FF_S_FIGHT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Fight table errors. */
		class S_FightError : public std::exception {
			public:
				/* Create an error with given message. */
				S_FightError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Fight table type. */
		class S_Fight : public Table {
			public:
				/* Create an empty S_Fight table without header. */
				S_Fight();
				
				/* Read the S_Fight table from a given file. */
				S_Fight(std::string input_file);
				
				/* Delete the S_Fight table. Does not delete any attached files. */
				virtual ~S_Fight();
		};
	}
}

#endif
