#ifndef XLELIB_FF_S_SCHEDULE_HPP
#define XLELIB_FF_S_SCHEDULE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Schedule table errors. */
		class S_ScheduleError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ScheduleError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Schedule table type. */
		class S_Schedule : public Conversion<S_Schedule> {
			public:
				/* Create an empty S_Schedule table without header. */
				S_Schedule();
				
				/* Read the S_Schedule table from a given file. */
				S_Schedule(std::string input_file);
				
				/* Delete the S_Schedule table. Does not delete any attached files. */
				virtual ~S_Schedule();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
