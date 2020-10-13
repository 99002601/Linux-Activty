#include "myutils.h"
/*
int factorial(int num)
{
	if(num>=1)
    {
        return num*factorial(num-1);
    }
    else
    {
        return 1;
    }
}
*/
int isPrime(int num)
{
	int i,flag=0;
	for (i = 2; i <= num / 2; ++i) {
	if (num% i == 0) {
            flag = 1;
            break;
        	}
    	}

	if (num == 1) 
        return 0;
    else if (flag == 0)
        return 1;
    else
        return 2; 
}

int isPalindrome(int num)
{
	int remainder,rev,orig;
	orig = num;
	while (num != 0) {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
	}
	if(rev==orig)
	return 1;
	else
	return 0;
}

int vsum(int num,...)
{
    va_list list;
    int sum = 0;
    va_start(list,num);
    for(int i=0;i<num;i++)
    {
        sum += va_arg(list,int);
    }
    va_end(list);
    return sum;
}



