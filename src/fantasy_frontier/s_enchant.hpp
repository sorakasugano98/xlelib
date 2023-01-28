#ifndef XLELIB_FF_S_ENCHANT_HPP
#define XLELIB_FF_S_ENCHANT_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Enchant table errors. */
		class S_EnchantError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EnchantError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Enchant table type. */
		class S_Enchant : public Conversion<S_Enchant> {
			public:
				/* Create an empty S_Enchant table without header. */
				S_Enchant();
				
				/* Read the S_Enchant table from a given file. */
				S_Enchant(std::string input_file);
				
				/* Delete the S_Enchant table. Does not delete any attached files. */
				virtual ~S_Enchant();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
				
				/* Remove or change the effects of the Astrologer Clas.
				   Requires S_Enchant.ini to be of version V.2|62. */
				void remove_astrologer();
		};
	}
}

#endif
