#ifndef XLELIB_FF_S_SCHEDULE_HPP
#define XLELIB_FF_S_SCHEDULE_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

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
		class S_Schedule : public Table {
			public:
				/* Create an empty S_Schedule table without header. */
				S_Schedule();
				
				/* Read the S_Schedule table from a given file. */
				S_Schedule(std::string input_file);
				
				/* Delete the S_Schedule table. Does not delete any attached files. */
				virtual ~S_Schedule();
		};
	}
}

#endif
