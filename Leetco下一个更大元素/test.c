#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//循环数组的话，一定又一个最大值输出为-1，
//其他的一定又对应的值
//思路循环两次所求链表
//第二次直到找到最大值所有的数都会记录相应合法的值

int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int* stack = (int*)malloc(sizeof(int) * 20010);
    int top = 0;
    int* ret = (int*)malloc(sizeof(int) * 20010);
    int max = 0;
    *returnSize = numsSize;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        while (top && nums[i] >= stack[top])
        {
            top--;
        }
        if (top)
        {
            ret[i] = stack[top];
        }
        else
        {
            ret[i] = -1;
        }
        stack[++top] = nums[i];
        if (nums[i] > max)
            max = nums[i];
    }
    int i = numsSize - 1;
    do
    {
        while (top != 0 && nums[i] >= stack[top])
        {
            top--;
        }
        if (top != 0)
        {
            ret[i] = stack[top];
        }
        else
        {
            ret[i] = -1;
        }
        stack[++top] = nums[i];
        if (i == 0)
            break;
    } while (nums[i--] != max);
    return ret;
}