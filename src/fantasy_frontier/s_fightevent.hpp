#ifndef XLELIB_FF_S_FIGHTEVENT_HPP
#define XLELIB_FF_S_FIGHTEVENT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_FightEvent table errors. */
		class S_FightEventError : public std::exception {
			public:
				/* Create an error with given message. */
				S_FightEventError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_FightEvent table type. */
		class S_FightEvent : public Table {
			public:
				/* Create an empty S_FightEvent table without header. */
				S_FightEvent();
				
				/* Read the S_FightEvent table from a given file. */
				S_FightEvent(std::string input_file);
				
				/* Delete the S_FightEvent table. Does not delete any attached files. */
				virtual ~S_FightEvent();
		};
	}
}

#endif
