#ifndef XLELIB_FF_S_GOODS_HPP
#define XLELIB_FF_S_GOODS_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Goods table errors. */
		class S_GoodsError : public std::exception {
			public:
				/* Create an error with given message. */
				S_GoodsError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Goods table type. */
		class S_Goods : public Table {
			public:
				/* Create an empty S_Goods table without header. */
				S_Goods();
				
				/* Read the S_Goods table from a given file. */
				S_Goods(std::string input_file);
				
				/* Delete the S_Goods table. Does not delete any attached files. */
				virtual ~S_Goods();
		};
	}
}

#endif
