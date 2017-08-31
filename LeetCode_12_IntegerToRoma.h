#ifndef _LEETCODE_12_H_
#define _LEETCODE_12_H_


/*
Given an integer, convert it to a roman numeral.

Input is guaranteed to be within the range from 1 to 3999.
*/

char* intToRoman(int num) {
    char* result = new char[16];
    result[15] = '\0';
    int index = 14;
    
    const char ROMA[] = {'I','V','X','L','C','D','M'};
    int bit = 0; 

    while(num > 0)
    {
        int last = num % 10;
        switch(last)
        {
        case 1:result[index--] = ROMA[bit]; break;
        case 2:result[index--] = ROMA[bit]; result[index--] = ROMA[bit]; break;
        case 3:result[index--] = ROMA[bit]; result[index--] = ROMA[bit]; result[index--] = ROMA[bit]; break;
        case 4:result[index--] = ROMA[bit + 1]; result[index--] = ROMA[bit]; break;
        case 5:result[index--] = ROMA[bit + 1]; break;
        case 6:result[index--] = ROMA[bit]; result[index--] = ROMA[bit + 1]; break;
        case 7:result[index--] = ROMA[bit]; result[index--] = ROMA[bit]; result[index--] = ROMA[bit + 1]; break;
        case 8:result[index--] = ROMA[bit]; result[index--] = ROMA[bit]; result[index--] = ROMA[bit]; result[index--] = ROMA[bit + 1]; break;
        case 9:result[index--] = ROMA[bit + 2]; result[index--] = ROMA[bit]; break;
        case 0:break;
        }      
        bit += 2;
        num = (num - last) / 10;
    } 
    return &result[index + 1]; 
}
#endif
