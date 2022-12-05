#ifndef XLELIB_FF_S_PARAMETER_HPP
#define XLELIB_FF_S_PARAMETER_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Parameter table errors. */
		class S_ParameterError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ParameterError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Parameter table type. */
		class S_Parameter : public Table {
			public:
				/* Create an empty S_Parameter table without header. */
				S_Parameter();
				
				/* Read the S_Parameter table from a given file. */
				S_Parameter(std::string input_file);
				
				/* Delete the S_Parameter table. Does not delete any attached files. */
				virtual ~S_Parameter();
		};
	}
}

#endif
