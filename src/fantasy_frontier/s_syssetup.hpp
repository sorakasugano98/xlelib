#ifndef XLELIB_FF_S_SYSSETUP_HPP
#define XLELIB_FF_S_SYSSETUP_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_SysSetup table errors. */
		class S_SysSetupError : public std::exception {
			public:
				/* Create an error with given message. */
				S_SysSetupError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_SysSetup table type. */
		class S_SysSetup : public Table {
			public:
				/* Create an empty S_SysSetup table without header. */
				S_SysSetup();
				
				/* Read the S_SysSetup table from a given file. */
				S_SysSetup(std::string input_file);
				
				/* Delete the S_SysSetup table. Does not delete any attached files. */
				virtual ~S_SysSetup();
		};
	}
}

#endif
