#ifndef XLELIB_FF_S_STORE_HPP
#define XLELIB_FF_S_STORE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Store table errors. */
		class S_StoreError : public std::exception {
			public:
				/* Create an error with given message. */
				S_StoreError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Store table type. */
		class S_Store : public Conversion<S_Store> {
			public:
				/* Create an empty S_Store table without header. */
				S_Store();
				
				/* Read the S_Store table from a given file. */
				S_Store(std::string input_file);
				
				/* Delete the S_Store table. Does not delete any attached files. */
				virtual ~S_Store();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
