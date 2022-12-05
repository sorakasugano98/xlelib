#ifndef XLELIB_FF_S_AI_HPP
#define XLELIB_FF_S_AI_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Ai table errors. */
		class S_AiError : public std::exception {
			public:
				/* Create an error with given message. */
				S_AiError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Ai table type. */
		class S_Ai : public Table {
			public:
				/* Create an empty S_Ai table without header. */
				S_Ai();
				
				/* Read the S_Ai table from a given file. */
				S_Ai(std::string input_file);
				
				/* Delete the S_Ai table. Does not delete any attached files. */
				virtual ~S_Ai();
		};
	}
}

#endif
