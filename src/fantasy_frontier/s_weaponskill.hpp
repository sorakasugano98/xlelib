#ifndef XLELIB_FF_S_WEAPONSKILL_HPP
#define XLELIB_FF_S_WEAPONSKILL_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_WeaponSkill table errors. */
		class S_WeaponSkillError : public std::exception {
			public:
				/* Create an error with given message. */
				S_WeaponSkillError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_WeaponSkill table type. */
		class S_WeaponSkill : public Conversion<S_WeaponSkill> {
			public:
				/* Create an empty S_WeaponSkill table without header. */
				S_WeaponSkill();
				
				/* Read the S_WeaponSkill table from a given file. */
				S_WeaponSkill(std::string input_file);
				
				/* Delete the S_WeaponSkill table. Does not delete any attached files. */
				virtual ~S_WeaponSkill();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
