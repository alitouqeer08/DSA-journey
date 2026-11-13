
/*
LeetCode 136 - Single Number

Approach: Brute Force (Nested Loops)
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count = 0;
        int unique = 0;

        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }

            if(count == 1){
                unique = nums[i];
            }

            count = 0;
        }

        return unique;
    }
};
