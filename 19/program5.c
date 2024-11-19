#include<stdio.h>
void Pattern(int iNo)
{
    for(int i=1;i<=iNo;i++)
    {
        //int iValue=(i*2); optional
        printf("%d\t",(i*2));
    }
}

int main() {
    int iValue = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}