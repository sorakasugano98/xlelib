#ifndef XLELIB_FF_S_FIGHTER_HPP
#define XLELIB_FF_S_FIGHTER_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Fighter table errors. */
		class S_FighterError : public std::exception {
			public:
				/* Create an error with given message. */
				S_FighterError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Fighter table type. */
		class S_Fighter : public Table {
			public:
				/* Create an empty S_Fighter table without header. */
				S_Fighter();
				
				/* Read the S_Fighter table from a given file. */
				S_Fighter(std::string input_file);
				
				/* Delete the S_Fighter table. Does not delete any attached files. */
				virtual ~S_Fighter();
		};
	}
}

#endif
