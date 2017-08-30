#ifndef _LEETCODE_11_H_
#define _LEETCODE_11_H_

/*
Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Note: You may not slant the container and n is at least 2.
*/

int maxArea(int* height, int heightSize) {
    int max = -1;
    int start = 0;
    int end = heightSize - 1;
    while(start != end)
    {
        int min = height[start] >= height[end]? height[end]:height[start];
        int temp = min * (end - start);
        max = max >= temp ? max : temp;
        if(height[start] >= height[end]) 
            end--;
        else
            start++;
    }
    return max;
}
#endif
