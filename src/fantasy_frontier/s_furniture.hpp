#ifndef XLELIB_FF_S_FURNITURE_HPP
#define XLELIB_FF_S_FURNITURE_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

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
		class S_Furniture : public Table {
			public:
				/* Create an empty S_Furniture table without header. */
				S_Furniture();
				
				/* Read the S_Furniture table from a given file. */
				S_Furniture(std::string input_file);
				
				/* Delete the S_Furniture table. Does not delete any attached files. */
				virtual ~S_Furniture();
		};
	}
}

#endif
