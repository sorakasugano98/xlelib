#ifndef XLELIB_FF_S_ACTIVITY_HPP
#define XLELIB_FF_S_ACTIVITY_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Activity table errors. */
		class S_ActivityError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ActivityError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Activity table type. */
		class S_Activity : public Conversion<S_Activity> {
			public:
				/* Create an empty S_Activity table without header. */
				S_Activity();
				
				/* Read the S_Activity table from a given file. */
				S_Activity(std::string input_file);
				
				/* Delete the S_Activity table. Does not delete any attached files. */
				virtual ~S_Activity();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
