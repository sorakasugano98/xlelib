#ifndef XLELIB_FF_S_DIVINATION_HPP
#define XLELIB_FF_S_DIVINATION_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Divination table errors. */
		class S_DivinationError : public std::exception {
			public:
				/* Create an error with given message. */
				S_DivinationError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Divination table type. */
		class S_Divination : public Conversion<S_Divination> {
			public:
				/* Create an empty S_Divination table without header. */
				S_Divination();
				
				/* Read the S_Divination table from a given file. */
				S_Divination(std::string input_file);
				
				/* Delete the S_Divination table. Does not delete any attached files. */
				virtual ~S_Divination();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
