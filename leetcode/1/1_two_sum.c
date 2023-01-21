/* Given an array of integers nums and an integer target,
return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution,
and you may not use the same element twice.
You can return the answer in any order.
The returned array must be malloced, assume caller calls free().

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1]. */

#include <stdio.h>
#include <stdlib.h>
/* int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;

    int *r;
    int i, j;
    r = (int *)malloc(sizeof(int) * 2);

    for (i = 0; i < numsSize - 1; i++)
    {
        j = i + 1;
        for (; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                r[0] = i;
                r[1] = j;
                return (r);
            }
        }
    }
    return (NULL);
}
 */

int main()  {

}
