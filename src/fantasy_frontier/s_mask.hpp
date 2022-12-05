#ifndef XLELIB_FF_S_MASK_HPP
#define XLELIB_FF_S_MASK_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Mask table errors. */
		class S_MaskError : public std::exception {
			public:
				/* Create an error with given message. */
				S_MaskError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Mask table type. */
		class S_Mask : public Table {
			public:
				/* Create an empty S_Mask table without header. */
				S_Mask();
				
				/* Read the S_Mask table from a given file. */
				S_Mask(std::string input_file);
				
				/* Delete the S_Mask table. Does not delete any attached files. */
				virtual ~S_Mask();
		};
	}
}

#endif
