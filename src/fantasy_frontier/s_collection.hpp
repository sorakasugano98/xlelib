#ifndef XLELIB_FF_S_COLLECTION_HPP
#define XLELIB_FF_S_COLLECTION_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Collection table errors. */
		class S_CollectionError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CollectionError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Collection table type. */
		class S_Collection : public Conversion<S_Collection> {
			public:
				/* Create an empty S_Collection table without header. */
				S_Collection();
				
				/* Read the S_Collection table from a given file. */
				S_Collection(std::string input_file);
				
				/* Delete the S_Collection table. Does not delete any attached files. */
				virtual ~S_Collection();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
