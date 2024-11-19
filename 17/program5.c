#include<stdio.h>

void MultipleDisplay(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        if(i%4==0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue =0;
    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}