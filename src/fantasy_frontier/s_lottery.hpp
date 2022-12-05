#ifndef XLELIB_FF_S_LOTTERY_HPP
#define XLELIB_FF_S_LOTTERY_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Lottery table errors. */
		class S_LotteryError : public std::exception {
			public:
				/* Create an error with given message. */
				S_LotteryError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Lottery table type. */
		class S_Lottery : public Table {
			public:
				/* Create an empty S_Lottery table without header. */
				S_Lottery();
				
				/* Read the S_Lottery table from a given file. */
				S_Lottery(std::string input_file);
				
				/* Delete the S_Lottery table. Does not delete any attached files. */
				virtual ~S_Lottery();
		};
	}
}

#endif
