#ifndef XLELIB_FF_S_BIOLOGY_HPP
#define XLELIB_FF_S_BIOLOGY_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Biology table errors. */
		class S_BiologyError : public std::exception {
			public:
				/* Create an error with given message. */
				S_BiologyError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Biology table type. */
		class S_Biology : public Conversion<S_Biology> {
			public:
				/* Create an empty S_Biology table without header. */
				S_Biology();
				
				/* Read the S_Biology table from a given file. */
				S_Biology(std::string input_file);
				
				/* Delete the S_Biology table. Does not delete any attached files. */
				virtual ~S_Biology();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
				
				/* Convert S_Biology from version 10.70 to 9.69.
				   This function removes the blood bar info. */
				void convert_10_70_to_9_69();
		};
	}
}

#endif
