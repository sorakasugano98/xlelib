#ifndef XLELIB_FF_S_EUDEMONRANK_HPP
#define XLELIB_FF_S_EUDEMONRANK_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_EudemonRank table errors. */
		class S_EudemonRankError : public std::exception {
			public:
				/* Create an error with given message. */
				S_EudemonRankError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_EudemonRank table type. */
		class S_EudemonRank : public Table {
			public:
				/* Create an empty S_EudemonRank table without header. */
				S_EudemonRank();
				
				/* Read the S_EudemonRank table from a given file. */
				S_EudemonRank(std::string input_file);
				
				/* Delete the S_EudemonRank table. Does not delete any attached files. */
				virtual ~S_EudemonRank();
		};
	}
}

#endif
