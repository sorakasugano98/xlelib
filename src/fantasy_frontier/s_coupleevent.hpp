#ifndef XLELIB_FF_S_COUPLEEVENT_HPP
#define XLELIB_FF_S_COUPLEEVENT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CoupleEvent table errors. */
		class S_CoupleEventError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CoupleEventError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CoupleEvent table type. */
		class S_CoupleEvent : public Table {
			public:
				/* Create an empty S_CoupleEvent table without header. */
				S_CoupleEvent();
				
				/* Read the S_CoupleEvent table from a given file. */
				S_CoupleEvent(std::string input_file);
				
				/* Delete the S_CoupleEvent table. Does not delete any attached files. */
				virtual ~S_CoupleEvent();
		};
	}
}

#endif
