﻿#include "normal.h"

/*
数组

峰值元素是指其值大于左右相邻值的元素。

给定一个输入数组 nums，其中 nums[i] ≠ nums[i+1]，找到峰值元素并返回其索引。

数组可能包含多个峰值，在这种情况下，返回任何一个峰值所在位置即可。

你可以假设 nums[-1] = nums[n] = -∞。
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();
        int i;

        for (i = 1; i < size; i++) {   // 返回第一个峰值元素
            if (nums[i] < nums[i - 1]) // 确保nums[i]之前都满足前一个小于后一个
                break;
        }

        return i - 1;
    }
};