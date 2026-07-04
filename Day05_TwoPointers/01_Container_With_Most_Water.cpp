/*
-------------------------------------------------------
Problem: Container With Most Water
Platform: LeetCode
Difficulty: Medium
Topic: Two Pointers
Pattern: Opposite Direction Two Pointers
Day: 5 - Two Pointers

Approach:
- Place one pointer at the start and one at the end.
- Calculate the area formed by both heights.
- Move the pointer with the smaller height because it limits the area.
- Continue until both pointers meet.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int best = 0;
        
        while (left < right) {
            int width = right - left;
            int h = min(height[left], height[right]);
            best = max(best, width * h);
            
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return best;
    }
};