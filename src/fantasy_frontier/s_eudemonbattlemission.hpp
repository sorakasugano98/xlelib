#ifndef XLELIB_FF_S_EUDEMONBATTLEMISSION_HPP
#define XLELIB_FF_S_EUDEMONBATTLEMISSION_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonBattleMission table errors. */
		class S_EudemonBattleMissionError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonBattleMissionError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonBattleMission table type. */
		class S_EudemonBattleMission : public Table {
			public:
				/* Create an empty S_EudemonBattleMission table without header. */
				S_EudemonBattleMission();
				
				/* Read the S_EudemonBattleMission table from a given file. */
				S_EudemonBattleMission(std::string input_file);
				
				/* Delete the S_EudemonBattleMission table. Does not delete any attached files. */
				virtual ~S_EudemonBattleMission();
		};
	}
}

#endif
