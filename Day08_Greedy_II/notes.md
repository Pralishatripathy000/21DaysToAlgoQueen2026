# 📝 Day 8 — Greedy II

## 🎯 Topics Covered

- Greedy Sorting
- Cost Optimization
- Resource Allocation
- Priority-Based Selection
- Greedy Scheduling

---

# Why Greedy?

Greedy algorithms work by making the best possible local decision at every step.

Unlike Dynamic Programming, Greedy never revisits previous decisions. Therefore, the key challenge is proving that the locally optimal choice also leads to the globally optimal solution.

Today's problems focused on recognizing situations where sorting helps simplify greedy decisions.

---

# 📌 Problem 1 — Marc's Cakewalk (HackerRank)

## Pattern

Greedy Sorting

## Problem

Minimize the number of miles Marc has to walk after eating cupcakes with different calorie values.

## Observation

Every cupcake contributes

```
2^i × calories
```

where **i** is the number of cupcakes already eaten.

To minimize the total distance, the highest-calorie cupcakes should be eaten first when the multiplier is smallest.

Therefore,

sort the calories in descending order before calculating the answer.

## Complexity

Time:

```
O(n log n)
```

Space:

```
O(1)
```

---

# 📌 Problem 2 — Luck Balance (HackerRank)

## Pattern

Greedy Selection

## Problem

Maximize Lena's luck by deciding which contests to lose.

## Observation

Lose all unimportant contests because there is no restriction.

Among important contests,

lose only the **k contests with the highest luck values**.

Win the remaining important contests.

Sorting makes this decision straightforward.

## Complexity

Time:

```
O(n log n)
```

Space:

```
O(n)
```

---

# 📌 Problem 3 — Greedy Florist (HackerRank)

## Pattern

Cost Optimization

## Problem

Purchase flowers while minimizing the total cost.

## Observation

Every additional flower bought by the same friend increases its cost.

Therefore,

purchase the most expensive flowers first when the multiplier is smallest.

Sort the flower prices in descending order.

Distribute purchases round-robin among friends.

## Complexity

Time:

```
O(n log n)
```

Space:

```
O(1)
```

---

# 💡 STL Used

- sort()
- reverse()
- vector



---

# 📚 Patterns Learned

✅ Greedy Sorting

✅ Cost Optimization

✅ Resource Allocation



---

# ⭐ Quick Revision

| Problem | Pattern | Time | Space |
|---------|---------|------|-------|
| Marc's Cakewalk | Greedy Sorting | O(n log n) | O(1) |
| Luck Balance | Greedy Selection | O(n log n) | O(n) |
| Greedy Florist | Cost Optimization | O(n log n) | O(1) |

---

# 🏁 Day Summary

Today's problems demonstrated that many optimization problems become much simpler after sorting.

The challenge is identifying why choosing the locally optimal option guarantees the globally optimal solution.
