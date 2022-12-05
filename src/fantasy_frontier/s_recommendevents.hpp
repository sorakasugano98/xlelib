#ifndef XLELIB_FF_S_RECOMMENDEVENTS_HPP
#define XLELIB_FF_S_RECOMMENDEVENTS_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_RecommendEvents table errors. */
		class S_RecommendEventsError : public std::exception {
			public:
				/* Create an error with given message. */
				S_RecommendEventsError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_RecommendEvents table type. */
		class S_RecommendEvents : public Table {
			public:
				/* Create an empty S_RecommendEvents table without header. */
				S_RecommendEvents();
				
				/* Read the S_RecommendEvents table from a given file. */
				S_RecommendEvents(std::string input_file);
				
				/* Delete the S_RecommendEvents table. Does not delete any attached files. */
				virtual ~S_RecommendEvents();
		};
	}
}

#endif
