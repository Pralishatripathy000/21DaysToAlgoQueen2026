/*
-------------------------------------------------------
Problem: Candy
Platform: LeetCode
Difficulty: Hard
Topic: Greedy
Pattern: Two-Pass Greedy
Day: 7 - Greedy

Approach:
- Give every child one candy initially.
- Traverse left to right to satisfy increasing ratings.
- Traverse right to left to satisfy decreasing ratings.
- Add the maximum required candies for every child.

Time Complexity: O(n)
Space Complexity: O(n)
-------------------------------------------------------
*/
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candies(n, 1);
        
        // Left to right: if this child rates higher than the previous, give one more candy
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        
        // Right to left: if this child rates higher than the next, make sure they get more candy
        for (int i = n - 2; i >= 0; i--) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = max(candies[i], candies[i + 1] + 1);
            }
        }
        
        int total = 0;
        for (int c : candies) {
            total += c;
        }
        
        return total;
    }
};