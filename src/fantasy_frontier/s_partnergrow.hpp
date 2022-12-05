#ifndef XLELIB_FF_S_PARTNERGROW_HPP
#define XLELIB_FF_S_PARTNERGROW_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_PartnerGrow table errors. */
		class S_PartnerGrowError : public std::exception {
			public:
				/* Create an error with given message. */
				S_PartnerGrowError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_PartnerGrow table type. */
		class S_PartnerGrow : public Table {
			public:
				/* Create an empty S_PartnerGrow table without header. */
				S_PartnerGrow();
				
				/* Read the S_PartnerGrow table from a given file. */
				S_PartnerGrow(std::string input_file);
				
				/* Delete the S_PartnerGrow table. Does not delete any attached files. */
				virtual ~S_PartnerGrow();
		};
	}
}

#endif
