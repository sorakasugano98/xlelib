#ifndef XLELIB_FF_S_CARDFIGHT_HPP
#define XLELIB_FF_S_CARDFIGHT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CardFight table errors. */
		class S_CardFightError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CardFightError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CardFight table type. */
		class S_CardFight : public Table {
			public:
				/* Create an empty S_CardFight table without header. */
				S_CardFight();
				
				/* Read the S_CardFight table from a given file. */
				S_CardFight(std::string input_file);
				
				/* Delete the S_CardFight table. Does not delete any attached files. */
				virtual ~S_CardFight();
		};
	}
}

#endif
