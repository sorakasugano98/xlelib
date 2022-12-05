#ifndef XLELIB_FF_S_REWARD_HPP
#define XLELIB_FF_S_REWARD_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Reward table errors. */
		class S_RewardError : public std::exception {
			public:
				/* Create an error with given message. */
				S_RewardError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Reward table type. */
		class S_Reward : public Table {
			public:
				/* Create an empty S_Reward table without header. */
				S_Reward();
				
				/* Read the S_Reward table from a given file. */
				S_Reward(std::string input_file);
				
				/* Delete the S_Reward table. Does not delete any attached files. */
				virtual ~S_Reward();
		};
	}
}

#endif
