/*
    Problem: Sort Colors
    Platform: LeetCode
    Difficulty: Medium

    Objective:
    Given an array containing only 0s, 1s, and 2s representing
    red, white, and blue, sort the array in-place without using
    the built-in sort function.

    Approach:
    - Use the Dutch National Flag Algorithm.
    - Maintain three pointers:
        * low  -> next position for 0
        * mid  -> current element being processed
        * high -> next position for 2
    - If the current element is:
        * 0: swap with low and move both pointers.
        * 1: leave it in place and move mid.
        * 2: swap with high and decrease high.
    - Continue until mid crosses high.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Concepts Practiced:
    - Arrays
    - Two Pointers
    - Dutch National Flag Algorithm
    - In-place Sorting
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};