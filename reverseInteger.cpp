/*
	https://leetcode.com/problems/reverse-integer/
*/

#include <cstdlib>
#include <iostream>
#include <vector>

#include <cmath>
#include <climits>


class Solution{
	public:
		int reverse(int x){
			int r = 0;
			while(x != 0){
				if(INT_MAX / 10 < r) return 0;
				if(INT_MIN / 10 > r) return 0;

				r = (r * 10) + (x % 10);
				x /= 10;
			}

			return r;
		}
};


int main(){
	Solution soln;
	std::vector<int> testCases;

	testCases.push_back(123);
	testCases.push_back(-123);
	testCases.push_back(120);

	testCases.push_back(-2147483648);
	testCases.push_back(2147483647);

	for(int test : testCases){
		std::cout << test << " ==> " << soln.reverse(test) << std::endl;
	}


	return EXIT_SUCCESS;
}
