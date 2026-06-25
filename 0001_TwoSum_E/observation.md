# Observation

```text
1. Since only one valid answer exists, the moment I find a pair I can immediately return it.

2. I start j from i + 1 because:
   - I cannot use the same element twice.
   - I don't want duplicate comparisons.

3. If I already checked (0,1), then checking (1,0) is useless.

4. I allocate memory for exactly two integers because I only need to return two indices.

5. As soon as target is found:
   result[0] = i
   result[1] = j
   return result

6. This is a classic pair checking problem.

7. Pattern:
   Nested Loop + Pair Sum Search
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
