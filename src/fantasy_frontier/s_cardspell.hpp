#ifndef XLELIB_FF_S_CARDSPELL_HPP
#define XLELIB_FF_S_CARDSPELL_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CardSpell table errors. */
		class S_CardSpellError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CardSpellError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CardSpell table type. */
		class S_CardSpell : public Table {
			public:
				/* Create an empty S_CardSpell table without header. */
				S_CardSpell();
				
				/* Read the S_CardSpell table from a given file. */
				S_CardSpell(std::string input_file);
				
				/* Delete the S_CardSpell table. Does not delete any attached files. */
				virtual ~S_CardSpell();
		};
	}
}

#endif
