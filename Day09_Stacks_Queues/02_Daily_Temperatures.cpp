/*
-------------------------------------------------------
Problem: Daily Temperatures
Platform: LeetCode
Difficulty: Medium
Topic: Stack
Pattern: Monotonic Stack
Day: 9 - Stacks & Queues

Approach:
- Maintain a decreasing stack of indices.
- Whenever a warmer temperature appears,
  resolve previous unanswered days.

Time Complexity: O(n)
Space Complexity: O(n)
-------------------------------------------------------
*/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st; // stores indices
        
        for (int i = 0; i < n; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                ans[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};