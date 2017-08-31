#ifndef _LEETCODE_13_H_
#define _LEETCODE_13_H_

/*
Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

*/
int toNumber(char ch);
int romanToInt(char* s) {
    int ret = toNumber(s[0]);  
    int i = 1;
    while(s[i] != '\0') {  
        if (toNumber(s[i - 1]) < toNumber(s[i])) {  
                ret += toNumber(s[i]) - 2 * toNumber(s[i - 1]);  
        } else {  
                ret += toNumber(s[i]);  
        }  
        ++i;
    }  
    return ret;      
}

int toNumber(char ch)
{
    switch (ch) {  
    case 'I': return 1;  
    case 'V': return 5;  
    case 'X': return 10;  
    case 'L': return 50;  
    case 'C': return 100;  
    case 'D': return 500;  
    case 'M': return 1000;  
    }  
    return 0;
}
#endif
