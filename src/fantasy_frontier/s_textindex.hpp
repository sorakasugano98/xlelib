#ifndef XLELIB_FF_S_TEXTINDEX_HPP
#define XLELIB_FF_S_TEXTINDEX_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_TextIndex table errors. */
		class S_TextIndexError : public std::exception {
			public:
				/* Create an error with given message. */
				S_TextIndexError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_TextIndex table type. */
		class S_TextIndex : public Conversion<S_TextIndex> {
			public:
				/* Create an empty S_TextIndex table without header. */
				S_TextIndex();
				
				/* Read the S_TextIndex table from a given file. */
				S_TextIndex(std::string input_file);
				
				/* Delete the S_TextIndex table. Does not delete any attached files. */
				virtual ~S_TextIndex();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
