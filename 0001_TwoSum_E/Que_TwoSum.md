# 1. Two Sum

## Problem Statement

Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.

### Conditions

* Exactly one valid answer exists.
* The same element cannot be used twice.
* The answer can be returned in any order.

---

## Examples

### Example 1

```text
Input: nums = [2,7,11,15], target = 9
Output: [0,1]

Explanation:
nums[0] + nums[1] = 2 + 7 = 9
```

### Example 2

```text
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

### Example 3

```text
Input: nums = [3,3], target = 6
Output: [0,1]
```

---

# Approach

## Brute Force Approach

For every element, check all elements after it and see whether their sum becomes equal to the target.

### Steps

1. Start the first loop using index `i`.
2. Start the second loop from `j = i + 1`.
3. Check:

   ```text
   nums[i] + nums[j] == target
   ```
4. If true:

   * Store both indices.
   * Set `returnSize = 2`.
   * Return the result immediately.

---

## Complexity Analysis

### Time Complexity

```text
O(n²)
```

### Space Complexity

```text
O(1)
```

Extra data structure is not used.
The returned array is not counted in auxiliary space complexity.

---

# Solution Type

```text
Brute Force
Nested Loop
Array Traversal
Pair Checking
```
