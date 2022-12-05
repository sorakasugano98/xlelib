#ifndef XLELIB_FF_S_WEAPONEXPERT_HPP
#define XLELIB_FF_S_WEAPONEXPERT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_WeaponExpert table errors. */
		class S_WeaponExpertError : public std::exception {
			public:
				/* Create an error with given message. */
				S_WeaponExpertError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_WeaponExpert table type. */
		class S_WeaponExpert : public Table {
			public:
				/* Create an empty S_WeaponExpert table without header. */
				S_WeaponExpert();
				
				/* Read the S_WeaponExpert table from a given file. */
				S_WeaponExpert(std::string input_file);
				
				/* Delete the S_WeaponExpert table. Does not delete any attached files. */
				virtual ~S_WeaponExpert();
		};
	}
}

#endif
