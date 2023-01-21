/*
 * @lc app=leetcode id=66 lang=c
 *
 * [66] Plus One
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

int *plusOne(int *digits, int digitsSize, int returnSize)
{
    int num = 0;
    int a = 0;
    int digits2 = digitsSize;
    while (digits2)
    {
        num = digits[a] + (num * 10);
        a++;
        digits2--;
    }
    int new_num = num + 1;
    int *new_arr;
    new_arr = (int *)malloc(sizeof(int) * returnSize);
    a = 0;
    while (returnSize)
    {
        new_arr[returnSize - 1] = new_num % 10;
        returnSize--;
        new_num /= 10;
    }
    return new_arr;
}

// @lc code=end
