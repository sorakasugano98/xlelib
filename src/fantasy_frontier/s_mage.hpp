#ifndef XLELIB_FF_S_MAGE_HPP
#define XLELIB_FF_S_MAGE_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Mage table errors. */
		class S_MageError : public std::exception {
			public:
				/* Create an error with given message. */
				S_MageError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Mage table type. */
		class S_Mage : public Table {
			public:
				/* Create an empty S_Mage table without header. */
				S_Mage();
				
				/* Read the S_Mage table from a given file. */
				S_Mage(std::string input_file);
				
				/* Delete the S_Mage table. Does not delete any attached files. */
				virtual ~S_Mage();
		};
	}
}

#endif
