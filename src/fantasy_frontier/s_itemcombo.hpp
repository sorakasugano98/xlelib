#ifndef XLELIB_FF_S_ITEMCOMBO_HPP
#define XLELIB_FF_S_ITEMCOMBO_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_ItemCombo table errors. */
		class S_ItemComboError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ItemComboError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_ItemCombo table type. */
		class S_ItemCombo : public Conversion<S_ItemCombo> {
			public:
				/* Create an empty S_ItemCombo table without header. */
				S_ItemCombo();
				
				/* Read the S_ItemCombo table from a given file. */
				S_ItemCombo(std::string input_file);
				
				/* Delete the S_ItemCombo table. Does not delete any attached files. */
				virtual ~S_ItemCombo();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
