# 📝 Day 7 — Greedy

## 🎯 Topics Covered

- Greedy Choice
- Farthest Reach
- Interval Scheduling
- Two-Pass Greedy
- Local Decision Making

---

# Why Greedy?

Greedy algorithms solve problems by making the best local choice at each step.

The challenge is not writing the code, but proving that the local choice leads to the global optimum.

---

# 📌 Problem 1 — Jump Game

## Pattern

Farthest Reach

## Approach

Track the farthest index reachable so far.

If the current index is ever greater than the farthest reachable index, it means we are stuck.

Otherwise, update the farthest reach using:

`maxReach = max(maxReach, i + nums[i])`

If traversal completes, the end is reachable.

## Complexity

Time: O(n)  
Space: O(1)

---

# 📌 Problem 2 — Non-overlapping Intervals

## Pattern

Interval Scheduling

## Approach

Sort intervals by ending time.

When two intervals overlap, keep the one that ends earlier because it leaves more room for future intervals.

Count how many intervals must be removed.

## Complexity

Time: O(n log n)  
Space: O(1)

---

# 📌 Problem 3 — Candy

## Pattern

Two-Pass Greedy

## Approach

Every child gets one candy initially.

First pass:

- Left to right
- If current rating is greater than previous rating, give more candies than previous child.

Second pass:

- Right to left
- If current rating is greater than next rating, ensure current child has more candies than next child.

Take the maximum required value from both directions.

## Complexity

Time: O(n)  
Space: O(n)

---

# 💡 STL Used

- vector
- sort()
- max()
- accumulate()

---


# 📚 Patterns Learned

✅ Farthest Reach  
✅ Interval Scheduling  
✅ Two-Pass Greedy  

---



# 🏁 Day Summary

Greedy problems are about choosing wisely.

The main takeaway is that the best immediate decision must also preserve the best future options.
