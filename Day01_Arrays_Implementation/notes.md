# 📝 Day 1 — Arrays & Implementation

## 🎯 Topics Covered

- Basic Array Traversal
- Array Manipulation
- Circular Arrays
- Greedy Traversal
- Kadane's Algorithm

---

# Why Arrays?

Arrays are one of the most fundamental data structures in Competitive Programming.

Many problems that initially appear complex can often be solved using a single linear traversal with the correct observation.

The primary objective today was to strengthen implementation skills while recognizing common array patterns.

---

# 📌 Problem 1 — Arrays - DS (HackerRank)

## Pattern

Basic Array Traversal

## Approach

The problem focuses on understanding array indexing and traversal.

Instead of processing elements in their original order, the array is traversed from the last element towards the beginning and printed in reverse.

No additional algorithm is required.

## Complexity

Time: **O(n)**

Space: **O(1)**

---

# 📌 Problem 2 — Left Rotation (HackerRank)

## Pattern

Circular Arrays

## Observation

Rotating an array one step at a time would require

```
O(n × d)
```

which becomes inefficient for large values of **d**.

Instead, every element can be directly placed at its final position using modular arithmetic.

For every index

```
answer[i] = arr[(i + d) % n]
```

This avoids repeated shifting and performs the rotation in a single traversal.

## Key Idea

Whenever a problem involves

- Circular arrays
- Rotations
- Wrap-around indexing

always think of

```
(index % n)
```

---

# 📌 Problem 3 — Maximum Subarray (LeetCode)

## Pattern

Kadane's Algorithm

## Problem

Find the contiguous subarray having the maximum possible sum.

## Observation

At every element, there are only two possibilities.

Either

- start a new subarray

or

- extend the previous subarray.

We always choose whichever gives the larger sum.

State Transition

```
currentSum = max(nums[i], currentSum + nums[i])
```

Update answer

```
maximumSum = max(maximumSum, currentSum)
```

This allows solving the problem in one traversal.

## Complexity

Time: **O(n)**

Space: **O(1)**

---

# 📌 Problem 4 — Best Time to Buy and Sell Stock (LeetCode)

## Pattern

Running Minimum

## Observation

At any day,

the maximum possible profit depends only on

- the current price

and

- the minimum price encountered before today.

While traversing,

keep updating

```
minimumPrice
```

Profit today

```
currentPrice - minimumPrice
```

Update the maximum profit continuously.

No nested loops are required.

## Complexity

Time: **O(n)**

Space: **O(1)**

---

# 💡 STL Used

- vector
- max()
- min()
- size()



---

# 📚 Patterns Learned

✅ Array Traversal

✅ Circular Arrays

✅ Running Minimum

✅ Kadane's Algorithm

---

# 🏁 Day Summary

Today's problems reinforced an important lesson:

Many array optimization problems do **not** require nested loops.

The key is identifying what information needs to be maintained while traversing the array only once.
