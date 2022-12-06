#ifndef XLELIB_FF_S_EXCHANGE_HPP
#define XLELIB_FF_S_EXCHANGE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Exchange table errors. */
		class S_ExchangeError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ExchangeError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Exchange table type. */
		class S_Exchange : public Conversion<S_Exchange> {
			public:
				/* Create an empty S_Exchange table without header. */
				S_Exchange();
				
				/* Read the S_Exchange table from a given file. */
				S_Exchange(std::string input_file);
				
				/* Delete the S_Exchange table. Does not delete any attached files. */
				virtual ~S_Exchange();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
