#ifndef XLELIB_FF_S_CARDSPELLFORMULA_HPP
#define XLELIB_FF_S_CARDSPELLFORMULA_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CardSpellFormula table errors. */
		class S_CardSpellFormulaError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CardSpellFormulaError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CardSpellFormula table type. */
		class S_CardSpellFormula : public Table {
			public:
				/* Create an empty S_CardSpellFormula table without header. */
				S_CardSpellFormula();
				
				/* Read the S_CardSpellFormula table from a given file. */
				S_CardSpellFormula(std::string input_file);
				
				/* Delete the S_CardSpellFormula table. Does not delete any attached files. */
				virtual ~S_CardSpellFormula();
		};
	}
}

#endif
