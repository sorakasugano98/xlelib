#ifndef XLELIB_FF_S_STATEDEPENDENCE_HPP
#define XLELIB_FF_S_STATEDEPENDENCE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_StateDependence table errors. */
		class S_StateDependenceError : public std::exception {
			public:
				/* Create an error with given message. */
				S_StateDependenceError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_StateDependence table type. */
		class S_StateDependence : public Conversion<S_StateDependence> {
			public:
				/* Create an empty S_StateDependence table without header. */
				S_StateDependence();
				
				/* Read the S_StateDependence table from a given file. */
				S_StateDependence(std::string input_file);
				
				/* Delete the S_StateDependence table. Does not delete any attached files. */
				virtual ~S_StateDependence();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
