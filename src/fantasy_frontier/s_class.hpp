#ifndef XLELIB_FF_S_CLASS_HPP
#define XLELIB_FF_S_CLASS_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Class table errors. */
		class S_ClassError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ClassError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Class table type. */
		class S_Class : public Table {
			public:
				/* Create an empty S_Class table without header. */
				S_Class();
				
				/* Read the S_Class table from a given file. */
				S_Class(std::string input_file);
				
				/* Delete the S_Class table. Does not delete any attached files. */
				virtual ~S_Class();
		};
	}
}

#endif
