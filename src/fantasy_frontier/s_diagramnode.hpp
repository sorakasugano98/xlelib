#ifndef XLELIB_FF_S_DIAGRAMNODE_HPP
#define XLELIB_FF_S_DIAGRAMNODE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

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
		class S_DiagramNode : public Conversion<S_DiagramNode> {
			public:
				/* Create an empty S_DiagramNode table without header. */
				S_DiagramNode();
				
				/* Read the S_DiagramNode table from a given file. */
				S_DiagramNode(std::string input_file);
				
				/* Delete the S_DiagramNode table. Does not delete any attached files. */
				virtual ~S_DiagramNode();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
				
				/* Convert S_DiagramNode from version 3.15 to 2.14.
				   This function removes the column for claimable guild coins. */
				void convert_3_15_to_2_14();
		};
	}
}

#endif
