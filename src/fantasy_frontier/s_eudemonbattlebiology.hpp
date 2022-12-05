#ifndef XLELIB_FF_S_EUDEMONBATTLEBIOLOGY_HPP
#define XLELIB_FF_S_EUDEMONBATTLEBIOLOGY_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonBattleBiology table errors. */
		class S_EudemonBattleBiologyError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonBattleBiologyError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonBattleBiology table type. */
		class S_EudemonBattleBiology : public Table {
			public:
				/* Create an empty S_EudemonBattleBiology table without header. */
				S_EudemonBattleBiology();
				
				/* Read the S_EudemonBattleBiology table from a given file. */
				S_EudemonBattleBiology(std::string input_file);
				
				/* Delete the S_EudemonBattleBiology table. Does not delete any attached files. */
				virtual ~S_EudemonBattleBiology();
		};
	}
}

#endif
