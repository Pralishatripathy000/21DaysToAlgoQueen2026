/*
-------------------------------------------------------
Problem: Binary Search
Platform: LeetCode
Difficulty: Easy
Topic: Binary Search
Pattern: Classic Binary Search
Day: 3 - Binary Search

Approach:
- Maintain two pointers representing the search space.
- Repeatedly compare the middle element with the target.
- Eliminate half of the search space after every comparison.

Time Complexity: O(log n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }
};