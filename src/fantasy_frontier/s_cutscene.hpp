#ifndef XLELIB_FF_S_CUTSCENE_HPP
#define XLELIB_FF_S_CUTSCENE_HPP

#include "../xlelib.hpp"
#include "../conversion.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_CutScene table errors. */
		class S_CutSceneError : public std::exception {
			public:
				/* Create an error with given message. */
				S_CutSceneError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_CutScene table type. */
		class S_CutScene : public Conversion<S_CutScene> {
			public:
				/* Create an empty S_CutScene table without header. */
				S_CutScene();
				
				/* Read the S_CutScene table from a given file. */
				S_CutScene(std::string input_file);
				
				/* Delete the S_CutScene table. Does not delete any attached files. */
				virtual ~S_CutScene();
				
				/* Init conversion and register required functions.
				   Do NOT call directly! This function is called by the constructor. */
				void init_conversion();
		};
	}
}

#endif
