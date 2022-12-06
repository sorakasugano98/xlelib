#ifndef XLELIB_FF_S_PARTNERTALK_HPP
#define XLELIB_FF_S_PARTNERTALK_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_PartnerTalk table errors. */
		class S_PartnerTalkError : public std::exception {
			public:
				/* Create an error with given message. */
				S_PartnerTalkError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_PartnerTalk table type. */
		class S_PartnerTalk : public Conversion<S_PartnerTalk> {
			public:
				/* Create an empty S_PartnerTalk table without header. */
				S_PartnerTalk();
				
				/* Read the S_PartnerTalk table from a given file. */
				S_PartnerTalk(std::string input_file);
				
				/* Delete the S_PartnerTalk table. Does not delete any attached files. */
				virtual ~S_PartnerTalk();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
