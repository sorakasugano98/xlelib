#ifndef XLELIB_FF_S_ITEMMALLENCHANT_HPP
#define XLELIB_FF_S_ITEMMALLENCHANT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_ItemMallEnchant table errors. */
		class S_ItemMallEnchantError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ItemMallEnchantError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_ItemMallEnchant table type. */
		class S_ItemMallEnchant : public Table {
			public:
				/* Create an empty S_ItemMallEnchant table without header. */
				S_ItemMallEnchant();
				
				/* Read the S_ItemMallEnchant table from a given file. */
				S_ItemMallEnchant(std::string input_file);
				
				/* Delete the S_ItemMallEnchant table. Does not delete any attached files. */
				virtual ~S_ItemMallEnchant();
		};
	}
}

#endif
