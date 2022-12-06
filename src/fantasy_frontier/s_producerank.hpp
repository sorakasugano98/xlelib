#ifndef XLELIB_FF_S_PRODUCERANK_HPP
#define XLELIB_FF_S_PRODUCERANK_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_ProduceRank table errors. */
		class S_ProduceRankError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ProduceRankError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_ProduceRank table type. */
		class S_ProduceRank : public Conversion<S_ProduceRank> {
			public:
				/* Create an empty S_ProduceRank table without header. */
				S_ProduceRank();
				
				/* Read the S_ProduceRank table from a given file. */
				S_ProduceRank(std::string input_file);
				
				/* Delete the S_ProduceRank table. Does not delete any attached files. */
				virtual ~S_ProduceRank();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
