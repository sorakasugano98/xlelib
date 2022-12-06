#ifndef XLELIB_FF_S_EUDEMONBATTLESPELL_HPP
#define XLELIB_FF_S_EUDEMONBATTLESPELL_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonBattleSpell table errors. */
		class S_EudemonBattleSpellError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonBattleSpellError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonBattleSpell table type. */
		class S_EudemonBattleSpell : public Conversion<S_EudemonBattleSpell> {
			public:
				/* Create an empty S_EudemonBattleSpell table without header. */
				S_EudemonBattleSpell();
				
				/* Read the S_EudemonBattleSpell table from a given file. */
				S_EudemonBattleSpell(std::string input_file);
				
				/* Delete the S_EudemonBattleSpell table. Does not delete any attached files. */
				virtual ~S_EudemonBattleSpell();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
