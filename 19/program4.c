#include<stdio.h>

void Pattern(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        printf("#\t%d\t*\t",i);
    }
}

int main() {
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}