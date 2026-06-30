# 📝 Day 3 — Binary Search

## 🎯 Topics Covered

- Classic Binary Search
- Lower Bound / Insertion Position
- First & Last Occurrence
- Binary Search Variations
- Search Space Reduction

---

# Why Binary Search?

Binary Search is one of the most important algorithms in Competitive Programming.

Instead of checking every element one by one, Binary Search repeatedly eliminates half of the search space, reducing the time complexity from **O(n)** to **O(log n)**.

The key requirement is that the search space must be **sorted** or satisfy a **monotonic condition**.

Today's goal was to understand the binary search template and explore its common variations.

---

# 📌 Problem 1 — Binary Search (LeetCode 704)

## Pattern

Classic Binary Search

## Problem

Given a sorted array and a target value, return the index of the target if it exists; otherwise return **-1**.

## Approach

Maintain two pointers:

- `left`
- `right`

Repeatedly calculate the middle element.

```
mid = left + (right - left) / 2
```

Compare the middle element with the target.

- If equal, return the index.
- If the target is larger, eliminate the left half.
- If the target is smaller, eliminate the right half.

Continue until the search space becomes empty.

## Why use

```
left + (right - left) / 2
```

instead of

```
(left + right) / 2
```

The first expression prevents integer overflow when the array size becomes very large.

## Complexity

Time: **O(log n)**

Space: **O(1)**

---

# 📌 Problem 2 — Search Insert Position (LeetCode 35)

## Pattern

Lower Bound

## Problem

Return the position of the target if it exists.

Otherwise return the position where it should be inserted while maintaining sorted order.

## Observation

The binary search logic remains exactly the same.

The only difference is what happens when the target is not found.

When the loop finishes,

```
left
```

points to the correct insertion position.

Therefore,

instead of returning

```
-1
```

we simply return

```
left
```

This introduces the concept of **Lower Bound**, which is widely used in competitive programming.

## Complexity

Time: **O(log n)**

Space: **O(1)**

---

# 📌 Problem 3 — Find First and Last Position of Element in Sorted Array (LeetCode 34)

## Pattern

Boundary Binary Search

## Problem

Find the first and last occurrence of a target element in a sorted array.

## Observation

A normal binary search stops as soon as it finds the target.

However, this problem requires finding the boundaries.

The solution is to perform Binary Search twice.

### First Search

Whenever the target is found,

store the answer,

then continue searching towards the left.

```
right = mid - 1
```

This finds the first occurrence.

### Second Search

Whenever the target is found,

store the answer,

then continue searching towards the right.

```
left = mid + 1
```

This finds the last occurrence.

## Complexity

Time:

```
O(log n)
```

for each search.

Overall:

```
O(log n)
```

Space:

```
O(1)
```

---

# 💡 Binary Search Template

```cpp
int left = 0;
int right = n - 1;

while(left <= right){

    int mid = left + (right - left)/2;

    if(nums[mid] == target)
        return mid;

    else if(nums[mid] < target)
        left = mid + 1;

    else
        right = mid - 1;
}
```

Most Binary Search problems are simply variations of this template.

---

# 💡 STL Used

- vector
- size()


---

# 📚 Patterns Learned

✅ Classic Binary Search

✅ Lower Bound

✅ First Occurrence

✅ Last Occurrence

✅ Boundary Search



---

# ⭐ Quick Revision

| Problem | Pattern | Time | Space |
|---------|---------|------|-------|
| Binary Search | Classic Binary Search | O(log n) | O(1) |
| Search Insert Position | Lower Bound | O(log n) | O(1) |
| Find First & Last Position | Boundary Binary Search | O(log n) | O(1) |

---

# 🏁 Day Summary

Today's practice reinforced that Binary Search is much more than finding an element in a sorted array.

By making small changes to the standard template, it can solve problems involving insertion positions, first and last occurrences, and many advanced optimization problems.

Mastering this template is essential because it forms the foundation for more complex techniques such as **Binary Search on Answer**, **Searching in Rotated Arrays**, and optimization problems commonly seen in ICPC and coding interviews.
