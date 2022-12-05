#ifndef XLELIB_FF_S_FIGHTBALANCE_HPP
#define XLELIB_FF_S_FIGHTBALANCE_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_FightBalance table errors. */
		class S_FightBalanceError : public std::exception {
			public:
				/* Create an error with given message. */
				S_FightBalanceError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_FightBalance table type. */
		class S_FightBalance : public Table {
			public:
				/* Create an empty S_FightBalance table without header. */
				S_FightBalance();
				
				/* Read the S_FightBalance table from a given file. */
				S_FightBalance(std::string input_file);
				
				/* Delete the S_FightBalance table. Does not delete any attached files. */
				virtual ~S_FightBalance();
		};
	}
}

#endif
