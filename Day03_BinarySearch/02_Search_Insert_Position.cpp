/*
-------------------------------------------------------
Problem: Search Insert Position
Platform: LeetCode
Difficulty: Easy
Topic: Binary Search
Pattern: Lower Bound
Day: 3 - Binary Search

Approach:
- Perform binary search on the sorted array.
- If the target is not found, return the index where it should be inserted to maintain sorted order.

Time Complexity: O(log n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

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

        return left;
    }
};