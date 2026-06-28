/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* findErrorNums(int* nums, int numsSize, int* returnSize) {

    int *answer = (int*)malloc(2 * sizeof(int));
    int count[10001] = {0};   // Count array

    *returnSize = 2;

    // Count how many times each number appears
    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }

    // Find duplicate and missing number
    for (int i = 1; i <= numsSize; i++) {
        if (count[i] == 2)
            answer[0] = i;   // Duplicate
        if (count[i] == 0)
            answer[1] = i;   // Missing
    }

    return answer;
}