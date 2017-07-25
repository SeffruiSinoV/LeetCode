#ifndef _DECODE_WAYS_H
#define _DECODE_WAYS_H
#include <string.h>
/*
 * A message containing letters from A-Z is being encoded to numbers using the following mapping: 
 * 'A' -> 1
 * 'B' -> 2
 * ...
 * 'Z' -> 26
 *  Given an encoded message containing digits, determine the total number of ways to decode it.
 *
 *  For example,
 *  Given encoded message "12", it could be decoded as "AB" (1 2) or "L" (12).
 *
 *  The number of ways decoding "12" is 2. 
 *
 */
int numDecodings(char* s) {
    //get length of s
    if(s[0] - 48 == 0)
        return 0;
    int length = strlen(s);
    if(length == 0)
        return 0;
    else if(length == 1)
        return 1;
    int first = s[0] - 48;
    int second = s[1] - 48;
    int number = first * 10 + second;
    int DP[length + 1];
    DP[0] = 0;
    DP[1] = 1;
    DP[2] = 2;
    if(number < 10)
    {
        DP[2] = 0;
    }   
    else if(number == 10 || number == 20)
    {
        DP[2] = 1;
    }
    else if(second == 0)
    {
        DP[2] = 0;
    }
    else if(number > 26)
    {
        DP[2] = 1;
    }
    for(int i=3;i<=length;++i)
    {
        int lastFirst = s[i-2] - 48;
        int lastSecond = s[i-1] - 48;
        int total = lastFirst * 10 + lastSecond;
        int count1 = 1;
        int count2 = 2;
        int hasCopy = 1;
        if(lastSecond == 0)
        {
            hasCopy = 0;
            count1 = 0;   
        }
        if(total < 10)
        {
            hasCopy = 0;
            count2 = 0;
        }
        else if(total == 10 || total == 20)
            count2 = 1;
        else if(total % 10== 0)
        {
            count2 = 0;
            hasCopy = 0;
        }
        else if(total > 26)
            count2 = 1;
        DP[i] = DP[i-1] * count1 + DP[i-2] * count2 - DP[i-2] * hasCopy;   
    }   
    return DP[length];
}
#endif
