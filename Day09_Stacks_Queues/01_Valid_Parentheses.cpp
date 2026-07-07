/*
-------------------------------------------------------
Problem: Valid Parentheses
Platform: LeetCode
Difficulty: Easy
Topic: Stack
Pattern: Matching Parentheses
Day: 9 - Stacks & Queues

Approach:
- Push opening brackets.
- Match and pop when a closing bracket appears.
- The stack should be empty at the end.

Time Complexity: O(n)
Space Complexity: O(n)
-------------------------------------------------------
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else {
                if (st.empty()) return false;
                if (c == ')' && st.top() != '(') return false;
                if (c == '}' && st.top() != '{') return false;
                if (c == ']' && st.top() != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};