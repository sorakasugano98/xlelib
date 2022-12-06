#ifndef XLELIB_FF_S_PARTY_HPP
#define XLELIB_FF_S_PARTY_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Party table errors. */
		class S_PartyError : public std::exception {
			public:
				/* Create an error with given message. */
				S_PartyError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Party table type. */
		class S_Party : public Conversion<S_Party> {
			public:
				/* Create an empty S_Party table without header. */
				S_Party();
				
				/* Read the S_Party table from a given file. */
				S_Party(std::string input_file);
				
				/* Delete the S_Party table. Does not delete any attached files. */
				virtual ~S_Party();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
