#ifndef XLELIB_FF_S_DIALOGUE_HPP
#define XLELIB_FF_S_DIALOGUE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Dialogue table errors. */
		class S_DialogueError : public std::exception {
			public:
				/* Create an error with given message. */
				S_DialogueError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Dialogue table type. */
		class S_Dialogue : public Conversion<S_Dialogue> {
			public:
				/* Create an empty S_Dialogue table without header. */
				S_Dialogue();
				
				/* Read the S_Dialogue table from a given file. */
				S_Dialogue(std::string input_file);
				
				/* Delete the S_Dialogue table. Does not delete any attached files. */
				virtual ~S_Dialogue();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
