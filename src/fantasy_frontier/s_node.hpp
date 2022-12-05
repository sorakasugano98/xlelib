#ifndef XLELIB_FF_S_NODE_HPP
#define XLELIB_FF_S_NODE_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Node table errors. */
		class S_NodeError : public std::exception {
			public:
				/* Create an error with given message. */
				S_NodeError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Node table type. */
		class S_Node : public Table {
			public:
				/* Create an empty S_Node table without header. */
				S_Node();
				
				/* Read the S_Node table from a given file. */
				S_Node(std::string input_file);
				
				/* Delete the S_Node table. Does not delete any attached files. */
				virtual ~S_Node();
		};
	}
}

#endif
