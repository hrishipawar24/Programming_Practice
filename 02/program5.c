//5.Accept one number from user and check weather number is even or odd
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet  = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet==TRUE)
    {
        printf("EVEN");
    }
    else if (bRet==FALSE)
    {
         printf("ODD");
    }
    
    return 0;
}