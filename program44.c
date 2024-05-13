//Problem Statement: Check whether it is prime or not 
// using flag 
#include<stdio.h>
#include<stdbool.h>
int CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;
    if(iNo < 0)
    {
        iNo = -iNo;//-(-28)
    }
    
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {   
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
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
