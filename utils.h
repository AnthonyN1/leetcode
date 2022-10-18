#ifndef __utils_h_
#define __utils_h_

#include <sstream>
#include <string>
#include <vector>


namespace Utils{
	template <class T> std::string print(const std::vector<T> &vec){
		if(vec.size() == 0){ return "[]"; }

		std::stringstream ss;
		ss << "[";
		for(unsigned int i = 0; i < vec.size() - 1; ++i) ss << vec[i] << ", ";
		ss << vec[vec.size() - 1];
		ss << "]";


		return ss.str();
	}
}

#endif
