#ifndef XLELIB_FF_S_FURNITURE_HPP
#define XLELIB_FF_S_FURNITURE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Furniture table errors. */
		class S_FurnitureError : public std::exception {
			public:
				/* Create an error with given message. */
				S_FurnitureError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Furniture table type. */
		class S_Furniture : public Conversion<S_Furniture> {
			public:
				/* Create an empty S_Furniture table without header. */
				S_Furniture();
				
				/* Read the S_Furniture table from a given file. */
				S_Furniture(std::string input_file);
				
				/* Delete the S_Furniture table. Does not delete any attached files. */
				virtual ~S_Furniture();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
				
				/* Convert S_Furniture from version 2.13 to 1.12.
				   This function removes an action column. */
				void convert_2_13_to_1_12();
		};
	}
}

#endif
