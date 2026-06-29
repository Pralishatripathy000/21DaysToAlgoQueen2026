/*
-------------------------------------------------------
Problem: Best Time to Buy and Sell Stock
Platform: LeetCode
Difficulty: Easy
Topic: Arrays
Pattern: One-Pass Traversal, Greedy
Day: 1 - Arrays & Implementation

Approach:
- Track the minimum stock price seen so far.
- Calculate the maximum possible profit at each step.

Time Complexity: O(n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }

        return maxProfit;
    }
};