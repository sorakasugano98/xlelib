#ifndef XLELIB_FF_S_COMBINE_HPP
#define XLELIB_FF_S_COMBINE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Combine table errors. */
		class S_CombineError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CombineError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Combine table type. */
		class S_Combine : public Conversion<S_Combine> {
			public:
				/* Create an empty S_Combine table without header. */
				S_Combine();
				
				/* Read the S_Combine table from a given file. */
				S_Combine(std::string input_file);
				
				/* Delete the S_Combine table. Does not delete any attached files. */
				virtual ~S_Combine();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
