#ifndef XLELIB_FF_S_FAMILYGAME_HPP
#define XLELIB_FF_S_FAMILYGAME_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_FamilyGame table errors. */
		class S_FamilyGameError : public std::exception {
			public:
				/* Create an error with given message. */
				S_FamilyGameError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_FamilyGame table type. */
		class S_FamilyGame : public Table {
			public:
				/* Create an empty S_FamilyGame table without header. */
				S_FamilyGame();
				
				/* Read the S_FamilyGame table from a given file. */
				S_FamilyGame(std::string input_file);
				
				/* Delete the S_FamilyGame table. Does not delete any attached files. */
				virtual ~S_FamilyGame();
		};
	}
}

#endif
