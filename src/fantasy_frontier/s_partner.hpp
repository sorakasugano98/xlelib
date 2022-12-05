#ifndef XLELIB_FF_S_PARTNER_HPP
#define XLELIB_FF_S_PARTNER_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Partner table errors. */
		class S_PartnerError : public std::exception {
			public:
				/* Create an error with given message. */
				S_PartnerError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Partner table type. */
		class S_Partner : public Table {
			public:
				/* Create an empty S_Partner table without header. */
				S_Partner();
				
				/* Read the S_Partner table from a given file. */
				S_Partner(std::string input_file);
				
				/* Delete the S_Partner table. Does not delete any attached files. */
				virtual ~S_Partner();
		};
	}
}

#endif
