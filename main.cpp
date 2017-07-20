#include "LeetCode_70_ClimbingStairs_DP.h"
#include "LeetCode_91_DecodeWays_DP.h"
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
    }
    return 0;
}
