#ifndef XLELIB_FF_S_RANKAWARD_HPP
#define XLELIB_FF_S_RANKAWARD_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_RankAward table errors. */
		class S_RankAwardError : public std::exception {
			public:
				/* Create an error with given message. */
				S_RankAwardError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_RankAward table type. */
		class S_RankAward : public Conversion<S_RankAward> {
			public:
				/* Create an empty S_RankAward table without header. */
				S_RankAward();
				
				/* Read the S_RankAward table from a given file. */
				S_RankAward(std::string input_file);
				
				/* Delete the S_RankAward table. Does not delete any attached files. */
				virtual ~S_RankAward();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
