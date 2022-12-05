#ifndef XLELIB_FF_S_COLLECTSCORE_HPP
#define XLELIB_FF_S_COLLECTSCORE_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CollectScore table errors. */
		class S_CollectScoreError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CollectScoreError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CollectScore table type. */
		class S_CollectScore : public Table {
			public:
				/* Create an empty S_CollectScore table without header. */
				S_CollectScore();
				
				/* Read the S_CollectScore table from a given file. */
				S_CollectScore(std::string input_file);
				
				/* Delete the S_CollectScore table. Does not delete any attached files. */
				virtual ~S_CollectScore();
		};
	}
}

#endif
