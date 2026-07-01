/*
-------------------------------------------------------
Problem: Sparse Arrays
Platform: HackerRank
Difficulty: Medium
Topic: Hashing
Pattern: Frequency Map
Day: 4 - Hashing & Maps

Approach:
- Store the frequency of every string using an unordered_map.
- For each query, directly return its frequency from the map.
- Avoid repeatedly traversing the input strings.

Time Complexity: O(n + q)
Space Complexity: O(n)
-------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    unordered_map<string, int> freq;
    
    // Build frequency map in O(n)
    for (const string& s : strings) {
        freq[s]++;
    }
    
    // Answer each query in O(1)
    vector<int> result;
    result.reserve(queries.size());
    for (const string& q : queries) {
        result.push_back(freq[q]); // returns 0 if not found (default value)
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<string> strings(n);
    for (int i = 0; i < n; i++) cin >> strings[i];
    
    int q;
    cin >> q;
    vector<string> queries(q);
    for (int i = 0; i < q; i++) cin >> queries[i];
    
    vector<int> result = matchingStrings(strings, queries);
    for (int r : result) {
        cout << r << "\n";
    }
    
    return 0;
}