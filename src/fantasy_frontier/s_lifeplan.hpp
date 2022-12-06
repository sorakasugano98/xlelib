#ifndef XLELIB_FF_S_LIFEPLAN_HPP
#define XLELIB_FF_S_LIFEPLAN_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_LifePlan table errors. */
		class S_LifePlanError : public std::exception {
			public:
				/* Create an error with given message. */
				S_LifePlanError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_LifePlan table type. */
		class S_LifePlan : public Conversion<S_LifePlan> {
			public:
				/* Create an empty S_LifePlan table without header. */
				S_LifePlan();
				
				/* Read the S_LifePlan table from a given file. */
				S_LifePlan(std::string input_file);
				
				/* Delete the S_LifePlan table. Does not delete any attached files. */
				virtual ~S_LifePlan();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
