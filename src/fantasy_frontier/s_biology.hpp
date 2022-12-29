#ifndef XLELIB_FF_S_BIOLOGY_HPP
#define XLELIB_FF_S_BIOLOGY_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Biology table errors. */
		class S_BiologyError : public std::exception {
			public:
				/* Create an error with given message. */
				S_BiologyError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Biology table type. */
		class S_Biology : public Conversion<S_Biology> {
			public:
				/* Create an empty S_Biology table without header. */
				S_Biology();
				
				/* Read the S_Biology table from a given file. */
				S_Biology(std::string input_file);
				
				/* Delete the S_Biology table. Does not delete any attached files. */
				virtual ~S_Biology();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
				
				/* Convert S_Biology from version 6.65 to 5.64.
				   This function removes the bonding value. */
				void convert_6_65_to_5_64();
				
				/* Convert S_Biology from version 7.66 to 6.65.
				   This function removes the column to hide/show NPCs for quests. */
				void convert_7_66_to_6_65();
				
				/* Convert S_Biology from version 8.67 to 7.66.
				   This function removes the bloodflash. */
				void convert_8_67_to_7_66();
				
				/* Convert S_Biology from version 9.69 to 8.67.
				   This function removes the blood armor. */
				void convert_9_69_to_8_67();
				
				/* Convert S_Biology from version 9.69 to 10.70.
				   This function adds an empty column for the blood bar.
				   Blood bar values have to be added manually. */
				void convert_9_69_to_10_70();
				
				/* Convert S_Biology from version 10.70 to 9.69.
				   This function removes the blood bar info. */
				void convert_10_70_to_9_69();
		};
	}
}

#endif
