#ifndef XLELIB_FF_S_EUDEMONBATTLEMAP_HPP
#define XLELIB_FF_S_EUDEMONBATTLEMAP_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonBattleMap table errors. */
		class S_EudemonBattleMapError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonBattleMapError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonBattleMap table type. */
		class S_EudemonBattleMap : public Conversion<S_EudemonBattleMap> {
			public:
				/* Create an empty S_EudemonBattleMap table without header. */
				S_EudemonBattleMap();
				
				/* Read the S_EudemonBattleMap table from a given file. */
				S_EudemonBattleMap(std::string input_file);
				
				/* Delete the S_EudemonBattleMap table. Does not delete any attached files. */
				virtual ~S_EudemonBattleMap();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
