#ifndef XLELIB_FF_S_ADVENTUREROAD_HPP
#define XLELIB_FF_S_ADVENTUREROAD_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_AdventureRoad table errors. */
		class S_AdventureRoadError : public std::exception {
			public:
				/* Create an error with given message. */
				S_AdventureRoadError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_AdventureRoad table type. */
		class S_AdventureRoad : public Conversion<S_AdventureRoad> {
			public:
				/* Create an empty S_AdventureRoad table without header. */
				S_AdventureRoad();
				
				/* Read the S_AdventureRoad table from a given file. */
				S_AdventureRoad(std::string input_file);
				
				/* Delete the S_AdventureRoad table. Does not delete any attached files. */
				virtual ~S_AdventureRoad();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
