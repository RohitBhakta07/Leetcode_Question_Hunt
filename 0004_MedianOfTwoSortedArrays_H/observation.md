# Observation

1. Since both arrays are already sorted, my first thought was:
   "Why not merge them into a single sorted array first?"

2. I used the same idea as Merge Sort's merge step:
   - Compare nums1[i] and nums2[j]
   - Insert the smaller value into the result array
   - Move that pointer forward

3. Once one array finishes, I know the remaining elements in the other array are already sorted,
   so I can directly copy them into the result array.

4. After merging, finding the median becomes a simple index problem instead of an array problem.

5. If total elements are odd:
   - Median is the middle element.

6. If total elements are even:
   - Median is the average of the two middle elements.

7. I used:
   ((resultSize - 1) / 2)
   and
   (resultSize / 2)

   because these formulas correctly give the middle indices for even and odd sizes.

8. I used:
   / 2.0

   instead of:
   / 2

   to avoid integer division and get the correct decimal median.

9. Although the problem asks for O(log(m+n)),
   this approach uses merging first, so its complexity becomes:

   Time Complexity  : O(m + n)
   Space Complexity : O(m + n)

10. Pattern I recognized:

    Two Sorted Arrays
            ↓
    Merge Process
            ↓
    Middle Element Calculation

11. My approach was not the optimal binary search solution,
    but it is straightforward, easy to debug,
    and works correctly for all valid test cases.