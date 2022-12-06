#ifndef XLELIB_FF_S_PARTNERMEMORIES_HPP
#define XLELIB_FF_S_PARTNERMEMORIES_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_PartnerMemories table errors. */
		class S_PartnerMemoriesError : public std::exception {
			public:
				/* Create an error with given message. */
				S_PartnerMemoriesError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_PartnerMemories table type. */
		class S_PartnerMemories : public Conversion<S_PartnerMemories> {
			public:
				/* Create an empty S_PartnerMemories table without header. */
				S_PartnerMemories();
				
				/* Read the S_PartnerMemories table from a given file. */
				S_PartnerMemories(std::string input_file);
				
				/* Delete the S_PartnerMemories table. Does not delete any attached files. */
				virtual ~S_PartnerMemories();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
