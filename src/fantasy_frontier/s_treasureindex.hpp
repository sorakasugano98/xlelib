#ifndef XLELIB_FF_S_TREASUREINDEX_HPP
#define XLELIB_FF_S_TREASUREINDEX_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_TreasureIndex table errors. */
		class S_TreasureIndexError : public std::exception {
			public:
				/* Create an error with given message. */
				S_TreasureIndexError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_TreasureIndex table type. */
		class S_TreasureIndex : public Conversion<S_TreasureIndex> {
			public:
				/* Create an empty S_TreasureIndex table without header. */
				S_TreasureIndex();
				
				/* Read the S_TreasureIndex table from a given file. */
				S_TreasureIndex(std::string input_file);
				
				/* Delete the S_TreasureIndex table. Does not delete any attached files. */
				virtual ~S_TreasureIndex();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
