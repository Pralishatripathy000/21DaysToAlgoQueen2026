/*
-------------------------------------------------------
Problem: Trapping Rain Water
Platform: LeetCode
Difficulty: Hard
Topic: Two Pointers
Pattern: Left Max and Right Max
Day: 5 - Two Pointers

Approach:
- Use two pointers from both ends.
- Track maximum height seen from the left and right.
- Water trapped depends on the smaller boundary.
- Move the side with the smaller height.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int leftMax = 0, rightMax = 0;
        int water = 0;
        
        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    water += leftMax - height[left];
                }
                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    water += rightMax - height[right];
                }
                right--;
            }
        }
        
        return water;
    }
};