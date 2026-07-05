/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

    
    int present[numsSize + 1];

    
    for (int i = 0; i <= numsSize; i++) {
        present[i] = 0;
    }

    
    for (int i = 0; i < numsSize; i++) {
        present[nums[i]] = 1;
    }

    
    int* result = (int*)malloc(numsSize * sizeof(int));

    *returnSize = 0;

    
    for (int i = 1; i <= numsSize; i++) {
        if (present[i] == 0) {
            result[*returnSize] = i;
            (*returnSize)++;
        }
    }

    return result;
  
}