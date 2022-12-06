#ifndef XLELIB_FF_S_MONSTERSTEP_HPP
#define XLELIB_FF_S_MONSTERSTEP_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_MonsterStep table errors. */
		class S_MonsterStepError : public std::exception {
			public:
				/* Create an error with given message. */
				S_MonsterStepError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_MonsterStep table type. */
		class S_MonsterStep : public Conversion<S_MonsterStep> {
			public:
				/* Create an empty S_MonsterStep table without header. */
				S_MonsterStep();
				
				/* Read the S_MonsterStep table from a given file. */
				S_MonsterStep(std::string input_file);
				
				/* Delete the S_MonsterStep table. Does not delete any attached files. */
				virtual ~S_MonsterStep();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
