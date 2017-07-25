#include <stdio.h>
/*
 * Given n, how many structurally unique BST's (binary search trees) that store values 1...n?
 *
 * For example,
 * Given n = 3, there are a total of 5 unique BST's
 */

int numTrees(int n) {
    int res[n + 1];
    res[0] = 1;
    res[1] = 1;
    for(int i = 2; i <= n; ++i)
    {
        res[i] = 0;
        for(int j = 0; j <= i - 1; ++j)
        {
            res[i] += res[j] * res[i - 1 - j];
        }
    }
    return res[n];
} 
