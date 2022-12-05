#ifndef XLELIB_FF_S_RIDESTEP_HPP
#define XLELIB_FF_S_RIDESTEP_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_RideStep table errors. */
		class S_RideStepError : public std::exception {
			public:
				/* Create an error with given message. */
				S_RideStepError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_RideStep table type. */
		class S_RideStep : public Table {
			public:
				/* Create an empty S_RideStep table without header. */
				S_RideStep();
				
				/* Read the S_RideStep table from a given file. */
				S_RideStep(std::string input_file);
				
				/* Delete the S_RideStep table. Does not delete any attached files. */
				virtual ~S_RideStep();
		};
	}
}

#endif
