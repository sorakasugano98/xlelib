#ifndef XLELIB_FF_S_TOXICCIRCLE_HPP
#define XLELIB_FF_S_TOXICCIRCLE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_ToxicCircle table errors. */
		class S_ToxicCircleError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ToxicCircleError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_ToxicCircle table type. */
		class S_ToxicCircle : public Conversion<S_ToxicCircle> {
			public:
				/* Create an empty S_ToxicCircle table without header. */
				S_ToxicCircle();
				
				/* Read the S_ToxicCircle table from a given file. */
				S_ToxicCircle(std::string input_file);
				
				/* Delete the S_ToxicCircle table. Does not delete any attached files. */
				virtual ~S_ToxicCircle();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
