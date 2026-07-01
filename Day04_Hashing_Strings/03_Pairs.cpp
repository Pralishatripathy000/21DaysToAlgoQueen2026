/*
-------------------------------------------------------
Problem: Pairs
Platform: HackerRank
Difficulty: Medium
Topic: Hashing
Pattern: Difference Lookup
Day: 4 - Hashing & Maps

Approach:
- Store all numbers in a hash set.
- For every element, check whether
  (current + k) exists.
- Count every valid pair.

Time Complexity: O(n)
Space Complexity: O(n)
-------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

int pairs(int k, vector<int> arr) {
    unordered_set<int> elements(arr.begin(), arr.end());
    int count = 0;
    
    for (int x : arr) {
        if (elements.count(x + k)) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cout << pairs(k, arr) << "\n";
    return 0;
}