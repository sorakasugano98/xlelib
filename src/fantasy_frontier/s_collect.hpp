#ifndef XLELIB_FF_S_COLLECT_HPP
#define XLELIB_FF_S_COLLECT_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Collect table errors. */
		class S_CollectError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CollectError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Collect table type. */
		class S_Collect : public Conversion<S_Collect> {
			public:
				/* Create an empty S_Collect table without header. */
				S_Collect();
				
				/* Read the S_Collect table from a given file. */
				S_Collect(std::string input_file);
				
				/* Delete the S_Collect table. Does not delete any attached files. */
				virtual ~S_Collect();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
