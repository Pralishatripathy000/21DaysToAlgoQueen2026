/*
-------------------------------------------------------
Problem: Minimum Window Substring
Platform: LeetCode
Difficulty: Hard
Topic: Sliding Window
Pattern: Minimum Valid Window
Day: 6 - Sliding Window

Approach:
- Track required character counts from string t.
- Expand the window until it contains all required characters.
- Shrink from the left while keeping the window valid.
- Store the smallest valid window.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) return "";
        
        unordered_map<char, int> need;
        for (char c : t) {
            need[c]++;
        }
        
        unordered_map<char, int> window;
        int required = need.size();  // number of unique chars we need
        int formed = 0;               // number of unique chars currently satisfied
        
        int left = 0;
        int bestLen = INT_MAX;
        int bestStart = 0;
        
        for (int right = 0; right < s.length(); right++) {
            char c = s[right];
            window[c]++;
            
            // Check if this character's count now exactly meets what's needed
            if (need.count(c) && window[c] == need[c]) {
                formed++;
            }
            
            // Try to shrink while the window is fully valid
            while (formed == required) {
                if (right - left + 1 < bestLen) {
                    bestLen = right - left + 1;
                    bestStart = left;
                }
                
                char leftChar = s[left];
                window[leftChar]--;
                if (need.count(leftChar) && window[leftChar] < need[leftChar]) {
                    formed--;
                }
                left++;
            }
        }
        
        return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
    }
};