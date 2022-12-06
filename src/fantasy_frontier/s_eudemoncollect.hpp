#ifndef XLELIB_FF_S_EUDEMONCOLLECT_HPP
#define XLELIB_FF_S_EUDEMONCOLLECT_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonCollect table errors. */
		class S_EudemonCollectError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonCollectError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonCollect table type. */
		class S_EudemonCollect : public Conversion<S_EudemonCollect> {
			public:
				/* Create an empty S_EudemonCollect table without header. */
				S_EudemonCollect();
				
				/* Read the S_EudemonCollect table from a given file. */
				S_EudemonCollect(std::string input_file);
				
				/* Delete the S_EudemonCollect table. Does not delete any attached files. */
				virtual ~S_EudemonCollect();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
