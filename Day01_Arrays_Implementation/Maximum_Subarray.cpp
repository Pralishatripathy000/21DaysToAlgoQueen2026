/*
-------------------------------------------------------
Problem: Maximum Subarray
Platform: LeetCode
Difficulty: Medium
Topic: Arrays
Pattern: Kadane's Algorithm, Dynamic Programming
Day: 1 - Arrays & Implementation

Approach:
- Traverse the array once while maintaining the maximum subarray sum ending at the current index.
- Update the overall maximum whenever a better sum is found.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};