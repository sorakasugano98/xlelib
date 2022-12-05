#ifndef XLELIB_FF_S_ITEMMALL_HPP
#define XLELIB_FF_S_ITEMMALL_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_ItemMall table errors. */
		class S_ItemMallError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ItemMallError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_ItemMall table type. */
		class S_ItemMall : public Table {
			public:
				/* Create an empty S_ItemMall table without header. */
				S_ItemMall();
				
				/* Read the S_ItemMall table from a given file. */
				S_ItemMall(std::string input_file);
				
				/* Delete the S_ItemMall table. Does not delete any attached files. */
				virtual ~S_ItemMall();
		};
	}
}

#endif
