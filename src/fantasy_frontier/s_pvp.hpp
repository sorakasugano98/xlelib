#ifndef XLELIB_FF_S_PVP_HPP
#define XLELIB_FF_S_PVP_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_PVP table errors. */
		class S_PVPError : public std::exception {
			public:
				/* Create an error with given message. */
				S_PVPError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_PVP table type. */
		class S_PVP : public Table {
			public:
				/* Create an empty S_PVP table without header. */
				S_PVP();
				
				/* Read the S_PVP table from a given file. */
				S_PVP(std::string input_file);
				
				/* Delete the S_PVP table. Does not delete any attached files. */
				virtual ~S_PVP();
		};
	}
}

#endif
