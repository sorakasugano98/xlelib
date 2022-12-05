#ifndef XLELIB_FF_S_CUSTOMEQUIP_HPP
#define XLELIB_FF_S_CUSTOMEQUIP_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CustomEquip table errors. */
		class S_CustomEquipError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CustomEquipError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CustomEquip table type. */
		class S_CustomEquip : public Table {
			public:
				/* Create an empty S_CustomEquip table without header. */
				S_CustomEquip();
				
				/* Read the S_CustomEquip table from a given file. */
				S_CustomEquip(std::string input_file);
				
				/* Delete the S_CustomEquip table. Does not delete any attached files. */
				virtual ~S_CustomEquip();
		};
	}
}

#endif
