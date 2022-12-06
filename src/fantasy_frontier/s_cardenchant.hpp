#ifndef XLELIB_FF_S_CARDENCHANT_HPP
#define XLELIB_FF_S_CARDENCHANT_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CardEnchant table errors. */
		class S_CardEnchantError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CardEnchantError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CardEnchant table type. */
		class S_CardEnchant : public Conversion<S_CardEnchant> {
			public:
				/* Create an empty S_CardEnchant table without header. */
				S_CardEnchant();
				
				/* Read the S_CardEnchant table from a given file. */
				S_CardEnchant(std::string input_file);
				
				/* Delete the S_CardEnchant table. Does not delete any attached files. */
				virtual ~S_CardEnchant();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
