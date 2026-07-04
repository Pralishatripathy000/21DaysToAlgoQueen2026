# 📝 Day 5 — Two Pointers

## 🎯 Topics Covered

- Opposite Direction Two Pointers
- Sorting + Two Pointers
- Duplicate Handling
- Boundary Optimization
- Water Trapping Logic

---

# Why Two Pointers?

Two Pointers is useful when a problem involves pairs, triplets, sorted arrays, or optimizing from both ends.

Instead of using nested loops, two pointers can often reduce the solution from O(n²) or O(n³) to a much more efficient approach.

---

# 📌 Problem 1 — Container With Most Water

## Pattern

Opposite Direction Two Pointers

## Approach

Start with two pointers:

- `left` at the beginning
- `right` at the end

The area is calculated as:

`min(height[left], height[right]) * (right - left)`

The smaller height limits the area, so move the pointer with the smaller height.

## Complexity

Time: O(n)  
Space: O(1)

---

# 📌 Problem 2 — 3Sum

## Pattern

Sorting + Two Pointers

## Approach

Sort the array first.

Fix one number, then use two pointers to find the remaining two numbers.

If the sum is too small, move the left pointer.  
If the sum is too large, move the right pointer.  
Skip duplicates to avoid repeated triplets.

## Complexity

Time: O(n²)  
Space: O(1) excluding output

---

# 📌 Problem 3 — Trapping Rain Water

## Pattern

Two Pointers with Boundaries

## Approach

Water trapped at any position depends on the smaller of the maximum heights on the left and right.

Maintain:

- `leftMax`
- `rightMax`

Move the pointer with the smaller boundary.

## Complexity

Time: O(n)  
Space: O(1)

---

# 💡 STL Used

- vector
- sort()
- min()
- max()

---



# 📚 Patterns Learned

✅ Opposite Direction Two Pointers  
✅ Sorting + Two Pointers  
✅ Boundary-Based Optimization  

---

# 🏁 Day Summary

Two Pointers is one of the most useful optimization techniques in competitive programming.

The key learning is that moving pointers intelligently can eliminate unnecessary comparisons and make solutions significantly faster.
