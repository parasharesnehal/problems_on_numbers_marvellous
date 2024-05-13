//Problem statement :- Check whether the accepted no. is perfect number or not.

#include<stdio.h>
#include<stdbool.h>
int CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum=0;
    if(iNo < 0)
    {
        printf("Please enter positive number\n");
        return false;
    }
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {   
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum == iNo)
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

    bRet = CheckPerfect(iValue);

    if(bRet==true)
    {
        printf("%d is a perfect number\n", iValue);
    }
    else    
    {
        printf("%d is not a perfect number\n", iValue);
    }
}