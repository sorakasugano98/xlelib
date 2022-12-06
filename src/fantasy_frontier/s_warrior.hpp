#ifndef XLELIB_FF_S_WARRIOR_HPP
#define XLELIB_FF_S_WARRIOR_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Warrior table errors. */
		class S_WarriorError : public std::exception {
			public:
				/* Create an error with given message. */
				S_WarriorError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Warrior table type. */
		class S_Warrior : public Conversion<S_Warrior> {
			public:
				/* Create an empty S_Warrior table without header. */
				S_Warrior();
				
				/* Read the S_Warrior table from a given file. */
				S_Warrior(std::string input_file);
				
				/* Delete the S_Warrior table. Does not delete any attached files. */
				virtual ~S_Warrior();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
