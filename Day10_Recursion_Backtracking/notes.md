# 📝 Day 10 — Recursion & Backtracking

## 🎯 Topics Covered

- Recursion
- Backtracking
- Decision Trees
- Constraint Satisfaction
- State Space Search

---

# Why Backtracking?

Backtracking explores all possible choices while eliminating invalid paths as early as possible.

Unlike brute force,

it avoids unnecessary computation by undoing previous decisions whenever a constraint is violated.

Most recursive problems can be viewed as exploring a decision tree.

---

# 📌 Problem 1 — Subsets (LeetCode)

## Pattern

Include / Exclude

## Observation

For every element,

there are only two choices.

- Include it
- Exclude it

Recursively explore both possibilities.

## Complexity

Time:

```
O(2^n)
```

Space:

```
O(n)
```

---

# 📌 Problem 2 — Permutations (LeetCode)

## Pattern

Permutation Generation

## Observation

At every recursive level,

choose one unused element,

swap it into the current position,

continue recursively,

then backtrack.

Every possible ordering is generated exactly once.

## Complexity

Time:

```
O(n!)
```

Space:

```
O(n)
```

---

# 📌 Problem 3 — N-Queens (LeetCode)

## Pattern

Constraint Satisfaction

## Problem

Place N queens on a chessboard so that no two queens attack each other.

## Observation

Place queens row by row.

Before placing a queen,

check

- Column
- Left diagonal
- Right diagonal

If safe,

continue recursively.

Otherwise,

backtrack and try another position.

## Complexity

Time:

```
Exponential
```

Space:

```
O(n)
```

---

# 💡 STL Used

- vector
- recursion
- swap()


---

# 📚 Patterns Learned

✅ Include / Exclude

✅ Permutation Generation

✅ Constraint Satisfaction

---


---

# ⭐ Quick Revision

| Problem | Pattern | Time | Space |
|---------|---------|------|-------|
| Subsets | Include / Exclude | O(2ⁿ) | O(n) |
| Permutations | Backtracking | O(n!) | O(n) |
| N-Queens | Constraint Search | Exponential | O(n) |

---

# 🏁 Day Summary

Today's problems demonstrated that recursion is not just about function calls—it's about exploring a search space systematically.

Backtracking becomes powerful when combined with pruning, allowing invalid paths to be discarded early and making seemingly impossible search problems manageable.
