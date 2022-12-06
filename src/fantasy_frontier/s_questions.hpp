#ifndef XLELIB_FF_S_QUESTIONS_HPP
#define XLELIB_FF_S_QUESTIONS_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Questions table errors. */
		class S_QuestionsError : public std::exception {
			public:
				/* Create an error with given message. */
				S_QuestionsError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Questions table type. */
		class S_Questions : public Conversion<S_Questions> {
			public:
				/* Create an empty S_Questions table without header. */
				S_Questions();
				
				/* Read the S_Questions table from a given file. */
				S_Questions(std::string input_file);
				
				/* Delete the S_Questions table. Does not delete any attached files. */
				virtual ~S_Questions();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
