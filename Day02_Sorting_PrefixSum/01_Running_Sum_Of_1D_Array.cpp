/*
-------------------------------------------------------
Problem: Running Sum of 1D Array
Platform: LeetCode
Difficulty: Easy
Topic: Prefix Sum
Pattern: Running Sum
Day: 2 - Sorting & Prefix Sum

Approach:
- Traverse the array once while maintaining a cumulative sum.
- Store the running total at each index.

Time Complexity: O(n)
Space Complexity: O(1) (excluding output)
-------------------------------------------------------
*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }

        return nums;
    }
};