//problem statement: print factorial of given number 

#include<stdio.h>
int Factorial (int iNo)
{
    int iCnt=0;
    unsigned int iFact = 1;
    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
    
}
int main()
{
    int iValue = 0;
    unsigned long int iRet= 0;
    printf("enter the number\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("factorial is : %lu", iRet);

    return 0;
}