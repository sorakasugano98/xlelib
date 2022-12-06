#ifndef XLELIB_FF_S_LOTTERY_HPP
#define XLELIB_FF_S_LOTTERY_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

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
		class S_Lottery : public Conversion<S_Lottery> {
			public:
				/* Create an empty S_Lottery table without header. */
				S_Lottery();
				
				/* Read the S_Lottery table from a given file. */
				S_Lottery(std::string input_file);
				
				/* Delete the S_Lottery table. Does not delete any attached files. */
				virtual ~S_Lottery();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
