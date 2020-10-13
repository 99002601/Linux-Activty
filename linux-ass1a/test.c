#include "bitmask.h"
#include "mystring.h"
#include "myutils.h"

int main()
{
    //int factCalc = factorial(4);
    //printf("factorial = %d",factCalc);
    int primeCheck = isPrime(11);
    printf("Prime or Not= %d",primeCheck);
    int palindCheck = isPalindrome(4334);
    printf("Palindrome or Not= %d",palindCheck);
    
    char string1[20] = "WorkingIn";
    char string2[20] = "LTTS";
    char stringcopy[10];
    int stringlen = mystrlen(string1);
    mystrcpy(string1,string2);
    int stringcmp= mystrcmp(string1,string2);
    printf("length of string = %d, string comparevalue = %d",stringlen,stringcmp);
    return 0;
}
