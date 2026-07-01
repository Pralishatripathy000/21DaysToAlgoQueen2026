# 📝 Day 4 — Hashing & Maps

## 🎯 Topics Covered

- Hash Maps
- Hash Sets
- Frequency Counting
- Complement Lookup
- Difference Lookup
- Constant Time Searching

---

# Why Hashing?

Hashing is one of the most powerful techniques in Competitive Programming because it allows data to be stored and retrieved in **average O(1)** time.

Instead of repeatedly searching through an array, a hash table stores previously seen values, enabling fast lookups and eliminating unnecessary nested loops.

Today's objective was to recognize situations where a brute-force solution can be replaced with an efficient hash-based approach.

---

# 📌 Problem 1 — Sparse Arrays (HackerRank)

## Pattern

Frequency Counting using Hash Map

## Problem

Given a list of strings and several query strings, determine how many times each query appears in the original list.

## Brute Force

For every query,

scan every string.

Time Complexity:

```
O(n × q)
```

which becomes inefficient for large inputs.

## Approach

Store the frequency of every string in an

```
unordered_map<string, int>
```

using one traversal.

For every query,

simply return

```
frequency[query]
```

If the query does not exist,

the frequency is

```
0
```

This avoids repeatedly traversing the list.

## Complexity

Time:

```
O(n + q)
```

Space:

```
O(n)
```

---

# 📌 Problem 2 — Ice Cream Parlor (HackerRank)

## Pattern

Complement Lookup (Two Sum)

## Problem

Find two ice cream flavors whose costs add up to the given amount.

## Observation

Instead of checking every possible pair,

for each value,

calculate

```
remaining = money - currentCost
```

If the remaining value has already been seen,

a valid answer has been found.

Otherwise,

store the current value and continue.

The hash map stores

```
value → index
```

allowing constant-time lookups.

## Complexity

Time:

```
O(n)
```

Space:

```
O(n)
```

---

# 📌 Problem 3 — Pairs (HackerRank)

## Pattern

Difference Lookup

## Problem

Count the number of pairs whose difference equals **k**.

## Observation

Instead of comparing every pair,

store all numbers inside a

```
unordered_set
```

For every element,

simply check whether

```
current + k
```

exists.

If it exists,

a valid pair has been found.

No sorting or nested loops are required.

## Complexity

Time:

```
O(n)
```

Space:

```
O(n)
```

---

# 💡 Hashing Cheat Sheet

## unordered_map

Stores

```
Key → Value
```

Example

```cpp
unordered_map<int,int> mp;

mp[5]++;

mp[10] = 3;

if(mp.count(5))
```

Used for

- Frequency counting
- Storing indices
- Counting occurrences

---

## unordered_set

Stores only unique values.

Example

```cpp
unordered_set<int> st;

st.insert(10);

if(st.count(10))
```

Used for

- Fast existence checking
- Removing duplicates
- Difference lookup problems

---

# 💡 STL Used

- unordered_map
- unordered_set
- count()
- insert()
- find()



---

# 📚 Patterns Learned

✅ Frequency Counting

✅ Complement Lookup (Two Sum)

✅ Difference Lookup

✅ Constant-Time Searching



---

# ⭐ Quick Revision

| Problem | Pattern | Time | Space |
|---------|---------|------|-------|
| Sparse Arrays | Frequency Map | O(n + q) | O(n) |
| Ice Cream Parlor | Complement Lookup | O(n) | O(n) |
| Pairs | Difference Lookup | O(n) | O(n) |

---

# 🏁 Day Summary

Today's practice emphasized one of the biggest optimization techniques in Competitive Programming: **trading extra memory for faster execution**.

By using hash maps and hash sets, expensive repeated searches can be replaced with constant-time lookups. Recognizing when to use hashing is an essential skill for ICPC-style contests, where efficient solutions often depend on choosing the right data structure rather than writing more complex logic.
