/*
-------------------------------------------------------
Problem: Subsets
Platform: LeetCode
Difficulty: Medium
Topic: Recursion
Pattern: Backtracking
Day: 10 - Recursion & Backtracking

Approach:
- At every element,
  either include it or exclude it.
- Explore both possibilities recursively.

Time Complexity: O(2^n)
Space Complexity: O(n)
-------------------------------------------------------
*/
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        
        function<void(int)> backtrack = [&](int start) {
            res.push_back(curr);
            for (int i = start; i < nums.size(); i++) {
                curr.push_back(nums[i]);
                backtrack(i + 1);
                curr.pop_back();
            }
        };
        
        backtrack(0);
        return res;
    }
};