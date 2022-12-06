#ifndef XLELIB_FF_S_SPELL_HPP
#define XLELIB_FF_S_SPELL_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Spell table errors. */
		class S_SpellError : public std::exception {
			public:
				/* Create an error with given message. */
				S_SpellError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Spell table type. */
		class S_Spell : public Conversion<S_Spell> {
			public:
				/* Create an empty S_Spell table without header. */
				S_Spell();
				
				/* Read the S_Spell table from a given file. */
				S_Spell(std::string input_file);
				
				/* Delete the S_Spell table. Does not delete any attached files. */
				virtual ~S_Spell();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
