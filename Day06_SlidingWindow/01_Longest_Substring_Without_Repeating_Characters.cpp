/*
-------------------------------------------------------
Problem: Longest Substring Without Repeating Characters
Platform: LeetCode
Difficulty: Medium
Topic: Sliding Window
Pattern: Variable Size Sliding Window
Day: 6 - Sliding Window

Approach:
- Use two pointers to maintain a window of unique characters.
- Store character frequency using a map or array.
- If a duplicate appears, shrink the window from the left.
- Track the maximum valid window length.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int left = 0;
        int maxLen = 0;
        
        for (int right = 0; right < s.length(); right++) {
            char c = s[right];
            
            // If we've seen this char before AND it's inside our current window
            if (lastSeen.count(c) && lastSeen[c] >= left) {
                left = lastSeen[c] + 1;
            }
            
            lastSeen[c] = right;
            maxLen = max(maxLen, right - left + 1);
        }
        
        return maxLen;
    }
};