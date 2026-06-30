/*
-------------------------------------------------------
Problem: Number of Substrings Containing All Three Characters
Platform: LeetCode
Difficulty: Medium
Topic: Sliding Window
Pattern: Variable Size Sliding Window, Two Pointers
Day: Sliding Window

Approach:
- Expand the window using the right pointer.
- Track the frequency of 'a', 'b', and 'c'.
- Once the window contains all three characters,
  every substring ending beyond the current right pointer
  is also valid.
- Add (n - right) to the answer and shrink the window.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int numberOfSubstrings(string s) {

        vector<int> freq(3, 0);

        int left = 0;
        int ans = 0;
        int n = s.size();

        for (int right = 0; right < n; right++) {

            freq[s[right] - 'a']++;

            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {

                ans += n - right;

                freq[s[left] - 'a']--;

                left++;
            }
        }

        return ans;
    }
};