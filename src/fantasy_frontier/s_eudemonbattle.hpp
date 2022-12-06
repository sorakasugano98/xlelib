#ifndef XLELIB_FF_S_EUDEMONBATTLE_HPP
#define XLELIB_FF_S_EUDEMONBATTLE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonBattle table errors. */
		class S_EudemonBattleError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonBattleError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonBattle table type. */
		class S_EudemonBattle : public Conversion<S_EudemonBattle> {
			public:
				/* Create an empty S_EudemonBattle table without header. */
				S_EudemonBattle();
				
				/* Read the S_EudemonBattle table from a given file. */
				S_EudemonBattle(std::string input_file);
				
				/* Delete the S_EudemonBattle table. Does not delete any attached files. */
				virtual ~S_EudemonBattle();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
