#ifndef XLELIB_FF_S_SPELLFORMULA_HPP
#define XLELIB_FF_S_SPELLFORMULA_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_SpellFormula table errors. */
		class S_SpellFormulaError : public std::exception {
			public:
				/* Create an error with given message. */
				S_SpellFormulaError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_SpellFormula table type. */
		class S_SpellFormula : public Conversion<S_SpellFormula> {
			public:
				/* Create an empty S_SpellFormula table without header. */
				S_SpellFormula();
				
				/* Read the S_SpellFormula table from a given file. */
				S_SpellFormula(std::string input_file);
				
				/* Delete the S_SpellFormula table. Does not delete any attached files. */
				virtual ~S_SpellFormula();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
