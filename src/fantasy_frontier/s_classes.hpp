#ifndef XLELIB_FF_S_CLASSES_HPP
#define XLELIB_FF_S_CLASSES_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Classes table errors. */
		class S_ClassesError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ClassesError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Classes table type. */
		class S_Classes : public Table {
			public:
				/* Create an empty S_Classes table without header. */
				S_Classes();
				
				/* Read the S_Classes table from a given file. */
				S_Classes(std::string input_file);
				
				/* Delete the S_Classes table. Does not delete any attached files. */
				virtual ~S_Classes();
		};
	}
}

#endif
