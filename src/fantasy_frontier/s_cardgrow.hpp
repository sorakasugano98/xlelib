#ifndef XLELIB_FF_S_CARDGROW_HPP
#define XLELIB_FF_S_CARDGROW_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CardGrow table errors. */
		class S_CardGrowError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CardGrowError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CardGrow table type. */
		class S_CardGrow : public Conversion<S_CardGrow> {
			public:
				/* Create an empty S_CardGrow table without header. */
				S_CardGrow();
				
				/* Read the S_CardGrow table from a given file. */
				S_CardGrow(std::string input_file);
				
				/* Delete the S_CardGrow table. Does not delete any attached files. */
				virtual ~S_CardGrow();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
				
				/* Convert S_CardGrow from version 2.41 to 1.21. */
				void convert_2_41_to_1_21();
		};
	}
}

#endif
