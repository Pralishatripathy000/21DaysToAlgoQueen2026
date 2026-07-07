/*
-------------------------------------------------------
Problem: Permutations
Platform: LeetCode
Difficulty: Medium
Topic: Backtracking
Pattern: Permutation Generation
Day: 10 - Recursion & Backtracking

Approach:
- Swap the current element with every possible choice.
- Recursively generate remaining permutations.
- Backtrack after every recursive call.

Time Complexity: O(n!)
Space Complexity: O(n)
-------------------------------------------------------
*/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        
        function<void(int)> backtrack = [&](int start) {
            if (start == nums.size()) {
                res.push_back(nums);
                return;
            }
            for (int i = start; i < nums.size(); i++) {
                swap(nums[start], nums[i]);
                backtrack(start + 1);
                swap(nums[start], nums[i]); // restore
            }
        };
        
        backtrack(0);
        return res;
    }
};