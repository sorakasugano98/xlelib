#ifndef XLELIB_FF_S_GROWEQUIP_HPP
#define XLELIB_FF_S_GROWEQUIP_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_GrowEquip table errors. */
		class S_GrowEquipError : public std::exception {
			public:
				/* Create an error with given message. */
				S_GrowEquipError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_GrowEquip table type. */
		class S_GrowEquip : public Table {
			public:
				/* Create an empty S_GrowEquip table without header. */
				S_GrowEquip();
				
				/* Read the S_GrowEquip table from a given file. */
				S_GrowEquip(std::string input_file);
				
				/* Delete the S_GrowEquip table. Does not delete any attached files. */
				virtual ~S_GrowEquip();
		};
	}
}

#endif
