#ifndef XLELIB_FF_S_BATTLEFIELD_HPP
#define XLELIB_FF_S_BATTLEFIELD_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Battlefield table errors. */
		class S_BattlefieldError : public std::exception {
			public:
				/* Create an error with given message. */
				S_BattlefieldError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Battlefield table type. */
		class S_Battlefield : public Table {
			public:
				/* Create an empty S_Battlefield table without header. */
				S_Battlefield();
				
				/* Read the S_Battlefield table from a given file. */
				S_Battlefield(std::string input_file);
				
				/* Delete the S_Battlefield table. Does not delete any attached files. */
				virtual ~S_Battlefield();
		};
	}
}

#endif
