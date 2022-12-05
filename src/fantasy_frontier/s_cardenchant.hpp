#ifndef XLELIB_FF_S_CARDENCHANT_HPP
#define XLELIB_FF_S_CARDENCHANT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

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
		class S_CardEnchant : public Table {
			public:
				/* Create an empty S_CardEnchant table without header. */
				S_CardEnchant();
				
				/* Read the S_CardEnchant table from a given file. */
				S_CardEnchant(std::string input_file);
				
				/* Delete the S_CardEnchant table. Does not delete any attached files. */
				virtual ~S_CardEnchant();
		};
	}
}

#endif
