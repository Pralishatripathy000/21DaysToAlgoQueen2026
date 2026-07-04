/*
-------------------------------------------------------
Problem: Jump Game
Platform: LeetCode
Difficulty: Medium
Topic: Greedy
Pattern: Farthest Reach
Day: 7 - Greedy

Approach:
- Track the farthest index that can be reached.
- Traverse the array.
- If the current index is beyond the farthest reach, return false.
- Otherwise, keep updating the farthest reachable index.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            // If current index is beyond what we can reach, we're stuck
            if (i > maxReach) {
                return false;
            }
            
            maxReach = max(maxReach, i + nums[i]);
        }
        
        return true;
    }
};