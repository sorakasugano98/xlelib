#ifndef XLELIB_FF_S_DIAGRAMGROUP_HPP
#define XLELIB_FF_S_DIAGRAMGROUP_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_DiagramGroup table errors. */
		class S_DiagramGroupError : public std::exception {
			public:
				/* Create an error with given message. */
				S_DiagramGroupError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_DiagramGroup table type. */
		class S_DiagramGroup : public Table {
			public:
				/* Create an empty S_DiagramGroup table without header. */
				S_DiagramGroup();
				
				/* Read the S_DiagramGroup table from a given file. */
				S_DiagramGroup(std::string input_file);
				
				/* Delete the S_DiagramGroup table. Does not delete any attached files. */
				virtual ~S_DiagramGroup();
		};
	}
}

#endif
