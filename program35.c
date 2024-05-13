//problem statement :- accept a no from user and display its factors
//Time Complexity :o(N)

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt=0;

    printf("factors of %d are: \n",iNo);
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {   
        if(iNo%iCnt==0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("enter the number\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    
 return 0;
}