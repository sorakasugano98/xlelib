#ifndef XLELIB_FF_S_FURNITUREDISPLAY_HPP
#define XLELIB_FF_S_FURNITUREDISPLAY_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_FurnitureDisplay table errors. */
		class S_FurnitureDisplayError : public std::exception {
			public:
				/* Create an error with given message. */
				S_FurnitureDisplayError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_FurnitureDisplay table type. */
		class S_FurnitureDisplay : public Conversion<S_FurnitureDisplay> {
			public:
				/* Create an empty S_FurnitureDisplay table without header. */
				S_FurnitureDisplay();
				
				/* Read the S_FurnitureDisplay table from a given file. */
				S_FurnitureDisplay(std::string input_file);
				
				/* Delete the S_FurnitureDisplay table. Does not delete any attached files. */
				virtual ~S_FurnitureDisplay();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
