#ifndef XLELIB_FF_S_STRENGTHENCHANT_HPP
#define XLELIB_FF_S_STRENGTHENCHANT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_StrengthEnchant table errors. */
		class S_StrengthEnchantError : public std::exception {
			public:
				/* Create an error with given message. */
				S_StrengthEnchantError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_StrengthEnchant table type. */
		class S_StrengthEnchant : public Table {
			public:
				/* Create an empty S_StrengthEnchant table without header. */
				S_StrengthEnchant();
				
				/* Read the S_StrengthEnchant table from a given file. */
				S_StrengthEnchant(std::string input_file);
				
				/* Delete the S_StrengthEnchant table. Does not delete any attached files. */
				virtual ~S_StrengthEnchant();
		};
	}
}

#endif
