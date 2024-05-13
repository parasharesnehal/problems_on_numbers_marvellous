//problem statement :- accept a no from user and display sum its factors
#include<stdio.h>

int SumFactor(int iNo)
{
    int iCnt=0;
    int iSum=0;

    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {   
        if(iNo%iCnt==0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0, iRet=0;

    printf("enter the number\n");
    scanf("%d", &iValue);

    iRet = SumFactor(iValue);
    printf("summation of factors : %d\n",iRet);
   
 return 0;
}