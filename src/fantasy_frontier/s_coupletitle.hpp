#ifndef XLELIB_FF_S_COUPLETITLE_HPP
#define XLELIB_FF_S_COUPLETITLE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CoupleTitle table errors. */
		class S_CoupleTitleError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CoupleTitleError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CoupleTitle table type. */
		class S_CoupleTitle : public Conversion<S_CoupleTitle> {
			public:
				/* Create an empty S_CoupleTitle table without header. */
				S_CoupleTitle();
				
				/* Read the S_CoupleTitle table from a given file. */
				S_CoupleTitle(std::string input_file);
				
				/* Delete the S_CoupleTitle table. Does not delete any attached files. */
				virtual ~S_CoupleTitle();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
