#ifndef XLELIB_FF_S_CLASSBASE_HPP
#define XLELIB_FF_S_CLASSBASE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_ClassBase table errors. */
		class S_ClassBaseError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ClassBaseError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_ClassBase table type. */
		class S_ClassBase : public Conversion<S_ClassBase> {
			public:
				/* Create an empty S_ClassBase table without header. */
				S_ClassBase();
				
				/* Read the S_ClassBase table from a given file. */
				S_ClassBase(std::string input_file);
				
				/* Delete the S_ClassBase table. Does not delete any attached files. */
				virtual ~S_ClassBase();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
