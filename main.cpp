#include "LeetCode_70_ClimbingStairs_DP.h"
#include "LeetCode_91_DecodeWays_DP.h"
#include "LeetCode_64_MinimumPathSum_DP.h"
#include "LeetCode_96_UniqueBinarySearchTrees_DP.h"
#include "LeetCode_11_ContainerWithMostWater_DP.h"
#include "LeetCode_42_TrappingRainWater_BackTrack.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv)
{
    if(argc<=1)
    {
        printf("you need to input LeetCode problem number\n");
        return 0;
    }
    int number = atoi(argv[1]);
    switch(number)
    {
    case 11:
        {
            printf("please input the count\n");
            int n;
            scanf("%d",&n);
            printf("please input n numbers\n");
            int *data = (int*)malloc(sizeof(int) * n);

            for(int i = 0; i < n; ++i) {
                scanf("%d",&data[i]);
            } 
            
            int max = maxArea(data,n);     
            printf("max is %d\n",max);
        }
        break;
    case 42:
        {
            printf("please input the count\n");
            int n;
            scanf("%d",&n);
            printf("please input n numbers\n");
            int *data = (int*)malloc(sizeof(int) * n);

            for(int i = 0; i < n; ++i) {
                scanf("%d",&data[i]);
            } 
            int max = trap(data,n);
            printf("result is %d \n",max); 
        }
        break;
    case 70:
            {
                printf("please input the number of stairs\n");
                long long numerOfStairs;
                scanf("%ld",&numerOfStairs);
                long long result = climbStairs(numerOfStairs);
                printf("result is %ld \n",result); 
            }
            break;
    case 91:
            {
                printf("please input number \n");
                char s[100];
                scanf("%s",s);
                int result = numDecodings(s);
                printf("result is %d\n",result);    
            }
            break;
    case 64:
            {
                int row;
                int col;
                printf("please input rows and cols");
                scanf("%d %d",&row,&col);
                int **grid = new int*[row];
                for(int i = 0;i<row;++i)
                {
                    grid[i] = new int[col];
                }
                for(int i = 0;i < row;++i)
                {
                    for(int j = 0;j < col;++j)
                    {
                        scanf("%d",&grid[i][j]);
                    }
                }
                int total = minPathSum(grid,row,col);
                printf("the min path  is %d\n",total);
            }
    case 96:
            {
                int n;
                printf("please number of nodes \n");
                scanf("%d",&n);
                int result = numTrees(n); 
                printf("result is %d \n",result);  
            }
		break;
	}
    return 0;
}
