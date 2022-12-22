#ifndef XLELIB_FF_S_CARD_HPP
#define XLELIB_FF_S_CARD_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Card table errors. */
		class S_CardError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CardError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Card table type. */
		class S_Card : public Conversion<S_Card> {
			public:
				/* Create an empty S_Card table without header. */
				S_Card();
				
				/* Read the S_Card table from a given file. */
				S_Card(std::string input_file);
				
				/* Delete the S_Card table. Does not delete any attached files. */
				virtual ~S_Card();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
				
				/* Convert S_Card from version 2.32 to 1.31.
				   This function removes the breakthrough title info. */
				void convert_2_32_to_1_31();
		};
	}
}

#endif
