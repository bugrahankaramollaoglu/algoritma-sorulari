/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.
Example 1:

Input: nums = [2,2,1]
Output: 1

Example 2:

Input: nums = [4,1,2,1,2]
Output: 4

Example 3:

Input: nums = [1]
Output: 1

Constraints:

    1 <= nums.length <= 3 * 104
    -3 * 104 <= nums[i] <= 3 * 104
    Each element in the array appears twice except for one element which appears only once.
 */

#include <stdio.h>

int singleNumber(int *nums, int numsSize)
{
    int i = 0;
    int repeat = 0;
    int a = 0;
    while (i < numsSize)
    {
        while (a < numsSize)
        {
            if (nums[i] == nums[a])
            {
                repeat++;
                if (repeat >= 2)
                    break;
            }
            a++;
        }
        if (repeat == 1)
            return (nums[i]);
        i++;
        repeat = 0;
        a = 0;
    }
    return 0;
}

int main()
{
    int asd[] = {2, 4, 4, 2, 1, 5, 1};
    printf("%d", singleNumber(asd, 7));
}