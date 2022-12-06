#ifndef XLELIB_FF_S_PANEL_HPP
#define XLELIB_FF_S_PANEL_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Panel table errors. */
		class S_PanelError : public std::exception {
			public:
				/* Create an error with given message. */
				S_PanelError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Panel table type. */
		class S_Panel : public Conversion<S_Panel> {
			public:
				/* Create an empty S_Panel table without header. */
				S_Panel();
				
				/* Read the S_Panel table from a given file. */
				S_Panel(std::string input_file);
				
				/* Delete the S_Panel table. Does not delete any attached files. */
				virtual ~S_Panel();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
