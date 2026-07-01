/*
-------------------------------------------------------
Problem: Ice Cream Parlor
Platform: HackerRank
Difficulty: Medium
Topic: Hashing
Pattern: Two Sum
Day: 4 - Hashing & Maps

Approach:
- Traverse the array once.
- For every cost, calculate the remaining amount needed.
- If the complement already exists in the hash map,
  return the pair of indices.
- Otherwise, store the current value and continue.

Time Complexity: O(n)
Space Complexity: O(n)
-------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> icecreamParlor(int m, vector<int> cost) {
    unordered_map<int, int> seen; // price -> index (1-based)
    
    for (int i = 0; i < (int)cost.size(); i++) {
        int need = m - cost[i];
        auto it = seen.find(need);
        if (it != seen.end()) {
            int j = it->second; // 1-based index, guaranteed < i+1
            return {j, i + 1}; // already sorted ascending since j was seen earlier
        }
        seen[cost[i]] = i + 1; // store 1-based index
    }
    return {}; // won't happen per constraints (unique solution guaranteed)
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<int> cost(n);
        for (int i = 0; i < n; i++) cin >> cost[i];
        
        vector<int> result = icecreamParlor(m, cost);
        cout << result[0] << " " << result[1] << "\n";
    }
    return 0;
}