#ifndef XLELIB_FF_S_RENTOBJECT_HPP
#define XLELIB_FF_S_RENTOBJECT_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_RentObject table errors. */
		class S_RentObjectError : public std::exception {
			public:
				/* Create an error with given message. */
				S_RentObjectError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_RentObject table type. */
		class S_RentObject : public Conversion<S_RentObject> {
			public:
				/* Create an empty S_RentObject table without header. */
				S_RentObject();
				
				/* Read the S_RentObject table from a given file. */
				S_RentObject(std::string input_file);
				
				/* Delete the S_RentObject table. Does not delete any attached files. */
				virtual ~S_RentObject();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
