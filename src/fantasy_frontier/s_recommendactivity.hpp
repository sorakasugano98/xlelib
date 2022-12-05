#ifndef XLELIB_FF_S_RECOMMENDACTIVITY_HPP
#define XLELIB_FF_S_RECOMMENDACTIVITY_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_RecommendActivity table errors. */
		class S_RecommendActivityError : public std::exception {
			public:
				/* Create an error with given message. */
				S_RecommendActivityError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_RecommendActivity table type. */
		class S_RecommendActivity : public Table {
			public:
				/* Create an empty S_RecommendActivity table without header. */
				S_RecommendActivity();
				
				/* Read the S_RecommendActivity table from a given file. */
				S_RecommendActivity(std::string input_file);
				
				/* Delete the S_RecommendActivity table. Does not delete any attached files. */
				virtual ~S_RecommendActivity();
		};
	}
}

#endif
