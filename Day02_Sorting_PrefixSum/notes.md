# 📝 Day 2 — Sorting & Prefix Sum

## 🎯 Topics Covered

- Prefix Sum
- Difference Array
- In-place Sorting
- Dutch National Flag Algorithm

---

# Why Prefix Sum?

Prefix Sum allows repeated range operations to be answered efficiently.

Instead of recalculating sums repeatedly,

pre-computation enables many queries to be answered in constant time.

Difference Arrays further extend this idea by making multiple range updates efficient.

---

# 📌 Problem 1 — Running Sum of 1D Array (LeetCode)

## Pattern

Prefix Sum

## Observation

Each element of the answer depends only on

```
previous running sum
```

Instead of recalculating

```
sum(0...i)
```

every time,

maintain a cumulative sum while traversing once.

Running Sum

```
running += nums[i]
```

Store

```
answer[i] = running
```

## Complexity

Time: **O(n)**

Space: **O(1)**

---

# 📌 Problem 2 — Array Manipulation (HackerRank)

## Pattern

Difference Array

## Problem

Multiple operations update

```
[l...r]
```

by adding a value.

A naïve solution updates every element individually,

leading to

```
O(n × q)
```

which exceeds the constraints.

## Observation

Instead of updating every position,

record only where an update begins

and

where it ends.

```
diff[l] += value

diff[r+1] -= value
```

After processing all operations,

compute one Prefix Sum.

The resulting array automatically reflects every update.

This reduces the complexity dramatically.

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

# 📌 Problem 3 — Sort Colors (LeetCode)

## Pattern

Dutch National Flag Algorithm

## Problem

Sort an array containing only

```
0

1

2
```

without using another sorting algorithm.

## Observation

Maintain three regions.

```
0s

1s

Unknown

2s
```

Three pointers

```
low

mid

high
```

guide the traversal.

Depending on the value,

swap elements into their correct region.

Each element is processed only once.

No library sort is required.

## Complexity

Time:

```
O(n)
```

Space:

```
O(1)
```

---

# 💡 STL Used

- swap()

- vector



---

# 📚 Patterns Learned

✅ Prefix Sum

✅ Difference Array

✅ Dutch National Flag Algorithm

---

# 🏁 Day Summary

Today's problems demonstrated that optimization often comes from changing the perspective of the problem rather than improving brute force.

Prefix Sum optimizes repeated calculations.

Difference Arrays optimize repeated updates.

Dutch National Flag optimizes sorting by exploiting constraints in the input.
