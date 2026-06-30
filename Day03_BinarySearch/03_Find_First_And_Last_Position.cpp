/*
-------------------------------------------------------
Problem: Find First and Last Position of Element in Sorted Array
Platform: LeetCode
Difficulty: Medium
Topic: Binary Search
Pattern: First & Last Occurrence
Day: 3 - Binary Search

Approach:
- Perform binary search twice.
- First search finds the leftmost occurrence.
- Second search finds the rightmost occurrence.
- Return both indices if the element exists.

Time Complexity: O(log n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:

    int findFirst(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;
        int ans = -1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                ans = mid;
                right = mid - 1;
            }
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return ans;
    }

    int findLast(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;
        int ans = -1;

        while (left <= right) {

            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                ans = mid;
                left = mid + 1;
            }
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        return {findFirst(nums, target), findLast(nums, target)};
    }
};