#ifndef XLELIB_FF_S_LEVEL_HPP
#define XLELIB_FF_S_LEVEL_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Level table errors. */
		class S_LevelError : public std::exception {
			public:
				/* Create an error with given message. */
				S_LevelError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Level table type. */
		class S_Level : public Conversion<S_Level> {
			public:
				/* Create an empty S_Level table without header. */
				S_Level();
				
				/* Read the S_Level table from a given file. */
				S_Level(std::string input_file);
				
				/* Delete the S_Level table. Does not delete any attached files. */
				virtual ~S_Level();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
