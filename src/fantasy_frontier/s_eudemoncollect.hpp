#ifndef XLELIB_FF_S_EUDEMONCOLLECT_HPP
#define XLELIB_FF_S_EUDEMONCOLLECT_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonCollect table errors. */
		class S_EudemonCollectError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonCollectError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonCollect table type. */
		class S_EudemonCollect : public Table {
			public:
				/* Create an empty S_EudemonCollect table without header. */
				S_EudemonCollect();
				
				/* Read the S_EudemonCollect table from a given file. */
				S_EudemonCollect(std::string input_file);
				
				/* Delete the S_EudemonCollect table. Does not delete any attached files. */
				virtual ~S_EudemonCollect();
		};
	}
}

#endif
