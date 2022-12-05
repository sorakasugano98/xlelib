#ifndef XLELIB_FF_S_DIAGRAMNODE_HPP
#define XLELIB_FF_S_DIAGRAMNODE_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_DiagramNode table errors. */
		class S_DiagramNodeError : public std::exception {
			public:
				/* Create an error with given message. */
				S_DiagramNodeError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_DiagramNode table type. */
		class S_DiagramNode : public Table {
			public:
				/* Create an empty S_DiagramNode table without header. */
				S_DiagramNode();
				
				/* Read the S_DiagramNode table from a given file. */
				S_DiagramNode(std::string input_file);
				
				/* Delete the S_DiagramNode table. Does not delete any attached files. */
				virtual ~S_DiagramNode();
		};
	}
}

#endif
