# 📝 Day 6 — Sliding Window

## 🎯 Topics Covered

- Fixed and Variable Size Windows
- Frequency Tracking
- Minimum Valid Window
- Expanding and Shrinking Windows
- Substring and Subarray Optimization

---

# Why Sliding Window?

Sliding Window is used when dealing with contiguous subarrays or substrings.

Instead of recalculating values for every possible range, maintain a window and update it as the pointers move.

---

# 📌 Problem 1 — Longest Substring Without Repeating Characters

## Pattern

Variable Size Sliding Window

## Approach

Maintain a window with unique characters.

Expand using the right pointer.

If a duplicate appears, shrink from the left until the window becomes valid again.

Track the maximum length of a valid window.

## Complexity

Time: O(n)  
Space: O(1)

---

# 📌 Problem 2 — Minimum Size Subarray Sum

## Pattern

Variable Size Sliding Window

## Approach

Expand the window until the sum becomes at least the target.

Once valid, shrink from the left to find the smallest possible length.

This works because all numbers are positive.

## Complexity

Time: O(n)  
Space: O(1)

---

# 📌 Problem 3 — Minimum Window Substring

## Pattern

Minimum Valid Window

## Approach

Count the required characters from `t`.

Expand the window until all required characters are present.

Then shrink from the left while maintaining validity.

Update the minimum window whenever a smaller valid substring is found.

## Complexity

Time: O(n)  
Space: O(1)

---

# 💡 STL Used

- unordered_map
- vector
- string
- min()
- max()

---



# 📚 Patterns Learned

✅ Variable Size Sliding Window  
✅ Frequency-Based Window  
✅ Minimum Valid Window  

---

# 🏁 Day Summary

Sliding Window is powerful because it converts many substring and subarray problems into linear-time solutions.

The main skill is knowing when to expand the window and when to shrink it.
