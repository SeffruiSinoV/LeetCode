#ifndef _95_H_
#define _95_H_

#include <stdio.h>
 struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
/**
 *  * Return an array of size *returnSize.
 *   * Note: The returned array must be malloced, assume caller calls free().
 *    */
struct TreeNode** generateTrees(int n, int* returnSize) {
    if(n <= 0)
    {
        *returnSize = 0;
        return  nullptr;
    }
    
    if(n == 1)
    {
        struct TreeNode* first = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        node->val = 1;
        node->left = nullptr;
        node->right = nullptr;
        
        *returnSize = 1; 
        return &first;
    }

    if(node == nullptr)
    {
        *returnSize = 0;
        return nullptr;   
    } 
    
    for(int i = 1; i < n; ++i)
    {
        int lastSize = 0;
        struct TreeNode** last = generateTrees(i,lastSize);   
        struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        for(int j = 0; j < lastSize; ++i)
        {
            struct TreeNode* head = last[j];
            
        }        
    }
}
#endif
