#ifndef XLELIB_FF_S_ITEM_HPP
#define XLELIB_FF_S_ITEM_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Item table errors. */
		class S_ItemError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ItemError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Item table type. */
		class S_Item : public Table {
			public:
				/* Create an empty S_Item table without header. */
				S_Item();
				
				/* Read the S_Item table from a given file. */
				S_Item(std::string input_file);
				
				/* Delete the S_Item table. Does not delete any attached files. */
				virtual ~S_Item();
		};
	}
}

#endif
