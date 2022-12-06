#ifndef XLELIB_FF_S_ABILITY_HPP
#define XLELIB_FF_S_ABILITY_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Ability table errors. */
		class S_AbilityError : public std::exception {
			public:
				/* Create an error with given message. */
				S_AbilityError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Ability table type. */
		class S_Ability : public Conversion<S_Ability> {
			public:
				/* Create an empty S_Ability table without header. */
				S_Ability();
				
				/* Read the S_Ability table from a given file. */
				S_Ability(std::string input_file);
				
				/* Delete the S_Ability table. Does not delete any attached files. */
				virtual ~S_Ability();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
