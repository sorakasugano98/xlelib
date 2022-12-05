#ifndef XLELIB_FF_S_DROPITEM_HPP
#define XLELIB_FF_S_DROPITEM_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_DropItem table errors. */
		class S_DropItemError : public std::exception {
			public:
				/* Create an error with given message. */
				S_DropItemError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_DropItem table type. */
		class S_DropItem : public Table {
			public:
				/* Create an empty S_DropItem table without header. */
				S_DropItem();
				
				/* Read the S_DropItem table from a given file. */
				S_DropItem(std::string input_file);
				
				/* Delete the S_DropItem table. Does not delete any attached files. */
				virtual ~S_DropItem();
		};
	}
}

#endif
