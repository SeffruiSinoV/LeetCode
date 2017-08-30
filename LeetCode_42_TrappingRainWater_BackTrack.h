#ifndef _LEETCODE_42_H_
#define _LEETCODE_42_H_

/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

For example, 
Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6.a
*/

int trap(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int total = 0;
    int temp = 0;
    int count = 0;
    int length = 0;
	int min = 0;
    while(left < right) {
		min = height[left] <= height[right] ? left : right;
		count = 0;
		temp = height[min];
		while
        if(height[left] <= height[right]) {
            count = 0;
            temp = height[left];
            index = left;
            while(left <= right  && height[left] <= temp) {
                count += height[left];
                left++;
            }
            length = left - index;
            total = total + length * temp - count;
        }
        else {
            count = 0;
            temp = height[right];
            index = right;
            while(left <= right && height[right] <= temp) {
                count += height[right];
                right--;
            }
            length = index - right;
            total = total + length * temp - count;
        }
    }
    return total;
}
#endif
