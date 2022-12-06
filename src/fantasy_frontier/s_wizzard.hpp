#ifndef XLELIB_FF_S_WIZZARD_HPP
#define XLELIB_FF_S_WIZZARD_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Wizzard table errors. */
		class S_WizzardError : public std::exception {
			public:
				/* Create an error with given message. */
				S_WizzardError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Wizzard table type. */
		class S_Wizzard : public Conversion<S_Wizzard> {
			public:
				/* Create an empty S_Wizzard table without header. */
				S_Wizzard();
				
				/* Read the S_Wizzard table from a given file. */
				S_Wizzard(std::string input_file);
				
				/* Delete the S_Wizzard table. Does not delete any attached files. */
				virtual ~S_Wizzard();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
