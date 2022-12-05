#ifndef XLELIB_FF_S_FIGHTADDON_HPP
#define XLELIB_FF_S_FIGHTADDON_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_FightAddon table errors. */
		class S_FightAddonError : public std::exception {
			public:
				/* Create an error with given message. */
				S_FightAddonError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_FightAddon table type. */
		class S_FightAddon : public Table {
			public:
				/* Create an empty S_FightAddon table without header. */
				S_FightAddon();
				
				/* Read the S_FightAddon table from a given file. */
				S_FightAddon(std::string input_file);
				
				/* Delete the S_FightAddon table. Does not delete any attached files. */
				virtual ~S_FightAddon();
		};
	}
}

#endif
