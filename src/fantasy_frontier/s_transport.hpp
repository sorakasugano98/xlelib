#ifndef XLELIB_FF_S_TRANSPORT_HPP
#define XLELIB_FF_S_TRANSPORT_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Transport table errors. */
		class S_TransportError : public std::exception {
			public:
				/* Create an error with given message. */
				S_TransportError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Transport table type. */
		class S_Transport : public Conversion<S_Transport> {
			public:
				/* Create an empty S_Transport table without header. */
				S_Transport();
				
				/* Read the S_Transport table from a given file. */
				S_Transport(std::string input_file);
				
				/* Delete the S_Transport table. Does not delete any attached files. */
				virtual ~S_Transport();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
