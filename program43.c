//Problem Statement: Check whether it is prime or not 
// using break statement
#include<stdio.h>
#include<stdbool.h>
int CheckPrime(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;//-(-28)
    }
    
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {   
        if((iNo % iCnt) == 0)
        {
            iCount++;
            break;
        }
    }
    if(iCount==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue;
    bool bRet=false;
    printf("enter the number: \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet==true)
    {
        printf("%d is a prime number\n", iValue);
    }
    else    
    {
        printf("%d is not a prime number\n", iValue);
    }
}
