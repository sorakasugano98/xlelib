#ifndef XLELIB_FF_S_ROGUE_HPP
#define XLELIB_FF_S_ROGUE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Rogue table errors. */
		class S_RogueError : public std::exception {
			public:
				/* Create an error with given message. */
				S_RogueError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Rogue table type. */
		class S_Rogue : public Conversion<S_Rogue> {
			public:
				/* Create an empty S_Rogue table without header. */
				S_Rogue();
				
				/* Read the S_Rogue table from a given file. */
				S_Rogue(std::string input_file);
				
				/* Delete the S_Rogue table. Does not delete any attached files. */
				virtual ~S_Rogue();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
