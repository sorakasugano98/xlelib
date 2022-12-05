#ifndef XLELIB_FF_S_EUDEMONBACKGROUND_HPP
#define XLELIB_FF_S_EUDEMONBACKGROUND_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonBackground table errors. */
		class S_EudemonBackgroundError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonBackgroundError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonBackground table type. */
		class S_EudemonBackground : public Table {
			public:
				/* Create an empty S_EudemonBackground table without header. */
				S_EudemonBackground();
				
				/* Read the S_EudemonBackground table from a given file. */
				S_EudemonBackground(std::string input_file);
				
				/* Delete the S_EudemonBackground table. Does not delete any attached files. */
				virtual ~S_EudemonBackground();
		};
	}
}

#endif
