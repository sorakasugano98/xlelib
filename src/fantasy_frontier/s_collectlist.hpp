#ifndef XLELIB_FF_S_COLLECTLIST_HPP
#define XLELIB_FF_S_COLLECTLIST_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CollectList table errors. */
		class S_CollectListError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CollectListError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CollectList table type. */
		class S_CollectList : public Table {
			public:
				/* Create an empty S_CollectList table without header. */
				S_CollectList();
				
				/* Read the S_CollectList table from a given file. */
				S_CollectList(std::string input_file);
				
				/* Delete the S_CollectList table. Does not delete any attached files. */
				virtual ~S_CollectList();
		};
	}
}

#endif
