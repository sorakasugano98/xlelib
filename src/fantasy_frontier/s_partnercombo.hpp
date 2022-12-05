#ifndef XLELIB_FF_S_PARTNERCOMBO_HPP
#define XLELIB_FF_S_PARTNERCOMBO_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_PartnerCombo table errors. */
		class S_PartnerComboError : public std::exception {
			public:
				/* Create an error with given message. */
				S_PartnerComboError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_PartnerCombo table type. */
		class S_PartnerCombo : public Table {
			public:
				/* Create an empty S_PartnerCombo table without header. */
				S_PartnerCombo();
				
				/* Read the S_PartnerCombo table from a given file. */
				S_PartnerCombo(std::string input_file);
				
				/* Delete the S_PartnerCombo table. Does not delete any attached files. */
				virtual ~S_PartnerCombo();
		};
	}
}

#endif
