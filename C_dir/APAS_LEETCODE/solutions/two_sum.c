#include <stdio.h>
#include <stdlib.h>

// Function to find two indices that sum up to the target
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL; // Return NULL if no solution is found
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("Indexes: [%d, %d]\n", result[0], result[1]);
        free(result); // Free allocated memory
    } else {
        printf("No solution found.\n");
    }

    return 0;
}

/*
Explanation:
Input: An array nums and a target value target.
Logic: Use a nested loop to check all pairs of numbers in the array.
Output: Return the indices of the two numbers that add up to the target.

This approach has a time complexity of $$O(n^2)$$ due to the nested loops.
For larger datasets, a more efficient solution using a hash map can be implemented.
*/
