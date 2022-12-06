#ifndef XLELIB_FF_S_PARTNERMISSION_HPP
#define XLELIB_FF_S_PARTNERMISSION_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_PartnerMission table errors. */
		class S_PartnerMissionError : public std::exception {
			public:
				/* Create an error with given message. */
				S_PartnerMissionError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_PartnerMission table type. */
		class S_PartnerMission : public Conversion<S_PartnerMission> {
			public:
				/* Create an empty S_PartnerMission table without header. */
				S_PartnerMission();
				
				/* Read the S_PartnerMission table from a given file. */
				S_PartnerMission(std::string input_file);
				
				/* Delete the S_PartnerMission table. Does not delete any attached files. */
				virtual ~S_PartnerMission();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
