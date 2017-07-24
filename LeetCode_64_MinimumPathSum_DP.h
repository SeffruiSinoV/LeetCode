#ifndef _LEETCODE_64_MINIMUMPATHSUM_DP_H_
#define _LEETCODE_64_MINIMUMPATHSUM_DP_H_

#include <cstdio>
/************************************************
Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right which minimizes the sum of all numbers along its path.

Note: You can only move either down or right at any point in time.

******************************88*/
int minPathSum(int** grid, int gridRowSize, int gridColSize) {
    for(int i = 1; i < gridColSize; ++i){
        int startX = 0;
        int startY = i;
        while(startX < gridRowSize && startY >= 0)
        {
            int left = 1000000000;
            int up = 100000000;
            if(startY - 1 >= 0)
                left = grid[startX][startY - 1];
            if(startX - 1 >= 0)
                up = grid[startX - 1][startY];
            int min = left < up? left : up;
            grid[startX][startY] = grid[startX][startY] + min;
            startX++;
            startY--;  
        } 
    }
    for(int i = 1; i < gridRowSize; ++i)
    {
        int startX = i;
        int startY = gridColSize - 1;
        while( startX < gridRowSize && startY >= 0)
        {
            int left = 1000000000;
            int up = 100000000;
            if(startY - 1 >= 0)
                left = grid[startX][startY - 1];
            if(startX - 1 >= 0)
                up = grid[startX - 1][startY];
            int min = left < up? left : up;
            grid[startX][startY] = grid[startX][startY] + min;
            startX++;
            startY--;  
        }
    } 
    return grid[gridRowSize - 2][gridColSize - 1];
}

#endif
