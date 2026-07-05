
A collection of LeetCode questions to ace the coding interview! - Created using [LeetHub v2](https://github.com/arunbhardwaj/LeetHub-2.0)# LeetCode Solutions (C)

Solutions to LeetCode problems solved in C, auto-tracked via LeetHub2.

---

## 485. Max Consecutive Ones

**Problem:** Given a binary array `nums`, return the maximum number of consecutive `1`'s in the array.

**Approach:** Single pass — keep a running `count` of consecutive 1's, reset it to 0 whenever a 0 is seen, and track the maximum count seen so far.

**Time Complexity:** O(n)
**Space Complexity:** O(1)

```c
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxCount = 0, count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            count++;
            if (count > maxCount)
                maxCount = count;
        } else {
            count = 0;
        }
    }
    return maxCount;
}
```

🔗 [Problem Link](https://leetcode.com/problems/max-consecutive-ones/)

---

## 1470. Shuffle the Array

**Problem:** Given array `nums` of `2n` elements in the form `[x1,...,xn,y1,...,yn]`, return the array in the form `[x1,y1,x2,y2,...,xn,yn]`.

**Approach:** Allocate a new result array of the same size. For each index `i` from `0` to `n-1`, place `nums[i]` at position `2*i` and `nums[i+n]` at position `2*i+1`.

**Time Complexity:** O(n)
**Space Complexity:** O(n) (for the result array)

```c
int* shuffle(int* nums, int numsSize, int n, int* returnSize)
{
    int* result = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[i + n];
    }
    *returnSize = numsSize;
    return result;
}
```

🔗 [Problem Link](https://leetcode.com/problems/shuffle-the-array/)

---

## 1929. Concatenation of Array

**Problem:** Given an integer array `nums` of length `n`, return an array `ans` of length `2n` where `ans[i] == nums[i]` and `ans[i + n] == nums[i]` for `0 <= i < n`.

**Approach:** Allocate a result array of size `2*numsSize`. Copy `nums` into the first half, then copy `nums` again into the second half.

**Time Complexity:** O(n)
**Space Complexity:** O(n) (for the result array)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize)
{
    int i;
    *returnSize = numsSize * 2;
    int *ans = malloc((*returnSize) * sizeof(int));
    for (i = 0; i < numsSize; i++)
    {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    return ans;
}
```

🔗 [Problem Link](https://leetcode.com/problems/concatenation-of-array/)

---

## Summary

| # | Problem | Difficulty | Pattern |
|---|---------|------------|---------|
| 485 | Max Consecutive Ones | Easy | Single Pass / Counting |
| 1470 | Shuffle the Array | Easy | Array Manipulation |
| 1929 | Concatenation of Array | Easy | Array Manipulation |

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0001-two-sum](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0001-two-sum) |
| [0014-longest-common-prefix](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0014-longest-common-prefix) |
| [0448-find-all-numbers-disappeared-in-an-array](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0448-find-all-numbers-disappeared-in-an-array) |
| [0645-set-mismatch](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0645-set-mismatch) |
## Hash Table
|  |
| ------- |
| [0001-two-sum](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0001-two-sum) |
| [0448-find-all-numbers-disappeared-in-an-array](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0448-find-all-numbers-disappeared-in-an-array) |
| [0645-set-mismatch](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0645-set-mismatch) |
## Bit Manipulation
|  |
| ------- |
| [0645-set-mismatch](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0645-set-mismatch) |
## Sorting
|  |
| ------- |
| [0645-set-mismatch](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0645-set-mismatch) |
## Linked List
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0002-add-two-numbers) |
## Math
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0002-add-two-numbers) |
## Recursion
|  |
| ------- |
| [0002-add-two-numbers](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0002-add-two-numbers) |
## String
|  |
| ------- |
| [0014-longest-common-prefix](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0014-longest-common-prefix) |
## Trie
|  |
| ------- |
| [0014-longest-common-prefix](https://github.com/na4722114-del/LEETCODE-QU/tree/master/0014-longest-common-prefix) |
<!---LeetCode Topics End-->