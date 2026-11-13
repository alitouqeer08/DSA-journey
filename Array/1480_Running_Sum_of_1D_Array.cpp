
// LeetCode 1480 - Running Sum of 1D Array
// Approach: Prefix Sum
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningsum;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            runningsum.push_back(sum);
        }

        return runningsum;
    }
};
