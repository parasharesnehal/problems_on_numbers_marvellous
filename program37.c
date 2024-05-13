//problem statement :- accept a no from user and display counter its factors
#include<stdio.h>

int CountFactor(int iNo)
{
    int iCnt=0;
    int iCount=0;

    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {   
        if(iNo % iCnt==0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iValue=0, iRet=0;

    printf("enter the number\n");
    scanf("%d", &iValue);

    iRet = CountFactor(iValue);
    printf("number of factors : %d\n",iRet);
   
 return 0;
}