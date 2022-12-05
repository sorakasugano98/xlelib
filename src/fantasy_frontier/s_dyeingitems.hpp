#ifndef XLELIB_FF_S_DYEINGITEMS_HPP
#define XLELIB_FF_S_DYEINGITEMS_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_DyeingItems table errors. */
		class S_DyeingItemsError : public std::exception {
			public:
				/* Create an error with given message. */
				S_DyeingItemsError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_DyeingItems table type. */
		class S_DyeingItems : public Table {
			public:
				/* Create an empty S_DyeingItems table without header. */
				S_DyeingItems();
				
				/* Read the S_DyeingItems table from a given file. */
				S_DyeingItems(std::string input_file);
				
				/* Delete the S_DyeingItems table. Does not delete any attached files. */
				virtual ~S_DyeingItems();
		};
	}
}

#endif
