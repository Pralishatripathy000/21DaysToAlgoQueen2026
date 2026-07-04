/*
-------------------------------------------------------
Problem: Minimum Size Subarray Sum
Platform: LeetCode
Difficulty: Medium
Topic: Sliding Window
Pattern: Variable Size Sliding Window
Day: 6 - Sliding Window

Approach:
- Expand the window by moving the right pointer.
- Add elements to the current sum.
- Once the sum becomes greater than or equal to target,
  shrink from the left to minimize window size.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int minLen = INT_MAX;
        
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            
            // Shrink from the left while the window is still valid
            while (sum >= target) {
                minLen = min(minLen, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        
        return minLen == INT_MAX ? 0 : minLen;
    }
};