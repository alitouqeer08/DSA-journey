
/*
LeetCode 485 - Max Consecutive Ones

Approach: Linear Traversal
Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int result = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count = 0;
            }
            else{
                count++;
            }

            if(result < count){
                result = count;
            }
        }

        return result;
    }
};
