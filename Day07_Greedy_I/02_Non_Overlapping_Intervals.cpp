/*
-------------------------------------------------------
Problem: Non-overlapping Intervals
Platform: LeetCode
Difficulty: Medium
Topic: Greedy
Pattern: Interval Scheduling
Day: 7 - Greedy

Approach:
- Sort intervals based on their ending time.
- Keep the interval that ends earlier to maximize future choices.
- Count intervals that need to be removed due to overlap.

Time Complexity: O(n log n)
Space Complexity: O(1)
-------------------------------------------------------
*/
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;
        
        sort(intervals.begin(), intervals.end(), 
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });
        
        int count = 1;  // number of intervals we keep
        int prevEnd = intervals[0][1];
        
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] >= prevEnd) {
                // No overlap (touching is fine) — keep this interval
                count++;
                prevEnd = intervals[i][1];
            }
            // else: overlaps with the one we kept — skip it (i.e., remove it)
        }
        
        return intervals.size() - count;
    }
};