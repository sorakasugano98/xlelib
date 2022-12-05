#ifndef XLELIB_FF_S_MISSIONLIST_HPP
#define XLELIB_FF_S_MISSIONLIST_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_MissionList table errors. */
		class S_MissionListError : public std::exception {
			public:
				/* Create an error with given message. */
				S_MissionListError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_MissionList table type. */
		class S_MissionList : public Table {
			public:
				/* Create an empty S_MissionList table without header. */
				S_MissionList();
				
				/* Read the S_MissionList table from a given file. */
				S_MissionList(std::string input_file);
				
				/* Delete the S_MissionList table. Does not delete any attached files. */
				virtual ~S_MissionList();
		};
	}
}

#endif
