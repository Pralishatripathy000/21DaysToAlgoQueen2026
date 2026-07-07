/*
-------------------------------------------------------
Problem: Largest Rectangle in Histogram
Platform: LeetCode
Difficulty: Hard
Topic: Stack
Pattern: Monotonic Stack
Day: 9 - Stacks & Queues

Approach:
- Use a monotonic increasing stack.
- Calculate the maximum rectangle whenever a shorter bar appears.

Time Complexity: O(n)
Space Complexity: O(n)
-------------------------------------------------------
*/
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;
        int n = heights.size();
        
        for (int i = 0; i <= n; i++) {
            int h = (i == n) ? 0 : heights[i];
            while (!st.empty() && h < heights[st.top()]) {
                int height = heights[st.top()]; st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }
        return maxArea;
    }
};