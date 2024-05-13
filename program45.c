//Problem Statement: Check whether it is prime or not 
// without using flag 

//input : 11        No/2 = 5    iCnt= 6
//input : 10        No/2 = 8    iCnt= 9


//input : 10        No/2 = 5    iCnt= 2
//input : 15        No/2 = 7    iCnt= 3

#include<stdio.h>
#include<stdbool.h>
int CheckPrime(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;//-(-28)
    }
    
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {   
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }

    if(iCnt > (iNo/2))
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
