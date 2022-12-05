#ifndef XLELIB_FF_S_CARDPVPFIGHT_HPP
#define XLELIB_FF_S_CARDPVPFIGHT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CardPVPFight table errors. */
		class S_CardPVPFightError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CardPVPFightError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CardPVPFight table type. */
		class S_CardPVPFight : public Table {
			public:
				/* Create an empty S_CardPVPFight table without header. */
				S_CardPVPFight();
				
				/* Read the S_CardPVPFight table from a given file. */
				S_CardPVPFight(std::string input_file);
				
				/* Delete the S_CardPVPFight table. Does not delete any attached files. */
				virtual ~S_CardPVPFight();
		};
	}
}

#endif
