#ifndef XLELIB_FF_S_PRODUCE_HPP
#define XLELIB_FF_S_PRODUCE_HPP

#include "../xlelib.hpp"
#include "../table.hpp"

namespace XLELib {
	namespace FF {
		/* Exception to handle S_Produce table errors. */
		class S_ProduceError : public std::exception {
			public:
				/* Create an error with given message. */
				S_ProduceError(std::string msg);
				
				/* Give the error message. */
				const char* what() const throw();
				
			private:
				/* Error message. */
				std::string error;
		};
		
		/* Class to handle the S_Produce table type. */
		class S_Produce : public Table {
			public:
				/* Create an empty S_Produce table without header. */
				S_Produce();
				
				/* Read the S_Produce table from a given file. */
				S_Produce(std::string input_file);
				
				/* Delete the S_Produce table. Does not delete any attached files. */
				virtual ~S_Produce();
		};
	}
}

#endif
