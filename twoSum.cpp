/*
	https://leetcode.com/problems/two-sum/
*/

#include <cstdlib>
#include <iostream>
#include <utility>

#include <vector>

#include "utils.h"


class Solution{
	public:
		std::vector<int> twoSum(const std::vector<int> &nums, int target){
			for(unsigned int i = 0; i < nums.size() - 1; ++i)
				for(unsigned int j = i + 1; j < nums.size(); ++j)
					if(nums[i] + nums[j] == target)
						return {(int)(i), (int)(j)};
			
			return {-1, -1};
		}
};


int main(){
	Solution soln;
	std::vector<std::pair<std::vector<int>, int>> testCases;

	testCases.push_back({{2, 7, 11, 15}, 9});
	testCases.push_back({{3, 2, 4}, 6});
	testCases.push_back({{3, 3}, 6});

	for(const std::pair<std::vector<int>, int> &test : testCases){
		std::cout << Utils::print<int>(test.first) << "; " << test.second << " ==> " << Utils::print<int>(soln.twoSum(test.first, test.second)) << std::endl;
	}


	return EXIT_SUCCESS;
}
