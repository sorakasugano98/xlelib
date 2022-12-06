#ifndef XLELIB_FF_S_EUDEMONBATTLEENCHANT_HPP
#define XLELIB_FF_S_EUDEMONBATTLEENCHANT_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonBattleEnchant table errors. */
		class S_EudemonBattleEnchantError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonBattleEnchantError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonBattleEnchant table type. */
		class S_EudemonBattleEnchant : public Conversion<S_EudemonBattleEnchant> {
			public:
				/* Create an empty S_EudemonBattleEnchant table without header. */
				S_EudemonBattleEnchant();
				
				/* Read the S_EudemonBattleEnchant table from a given file. */
				S_EudemonBattleEnchant(std::string input_file);
				
				/* Delete the S_EudemonBattleEnchant table. Does not delete any attached files. */
				virtual ~S_EudemonBattleEnchant();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
