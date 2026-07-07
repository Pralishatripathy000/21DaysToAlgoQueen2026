# 📝 Day 9 — Stacks & Queues

## 🎯 Topics Covered

- Stack
- Monotonic Stack
- Previous / Next Greater Element
- Histogram Problems
- LIFO Data Structure

---

# Why Stack?

A stack follows the **Last In, First Out (LIFO)** principle.

It is extremely useful whenever recent information needs to be processed first.

Many competitive programming problems involving nearest greater elements, parentheses, or histogram areas can be solved efficiently using stacks.

---

# 📌 Problem 1 — Valid Parentheses (LeetCode)

## Pattern

Matching Parentheses

## Approach

Push every opening bracket onto the stack.

Whenever a closing bracket appears,

check whether it matches the stack's top.

At the end,

the stack should be empty.

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

# 📌 Problem 2 — Daily Temperatures (LeetCode)

## Pattern

Monotonic Stack

## Problem

Find the next warmer day for every temperature.

## Observation

Maintain a stack of indices whose temperatures have not yet found a warmer day.

Whenever a warmer temperature appears,

resolve all smaller temperatures on the stack.

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

# 📌 Problem 3 — Largest Rectangle in Histogram (LeetCode)

## Pattern

Monotonic Stack

## Problem

Find the largest rectangular area inside a histogram.

## Observation

Maintain an increasing stack.

Whenever a shorter bar appears,

calculate the maximum rectangle for every taller bar removed from the stack.

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

# 💡 STL Used

- stack
- vector
- max()

---



# 📚 Patterns Learned

✅ Stack

✅ Monotonic Stack

✅ Previous & Next Greater Element

---



# ⭐ Quick Revision

| Problem | Pattern | Time | Space |
|---------|---------|------|-------|
| Valid Parentheses | Stack | O(n) | O(n) |
| Daily Temperatures | Monotonic Stack | O(n) | O(n) |
| Largest Rectangle in Histogram | Monotonic Stack | O(n) | O(n) |

---

# 🏁 Day Summary

Today's problems highlighted how stacks efficiently remember recent elements.

The Monotonic Stack is especially important because it transforms many O(n²) comparison problems into linear-time solutions.
