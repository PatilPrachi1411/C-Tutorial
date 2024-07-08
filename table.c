// Table of any number taking the input from user
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%d \n",n*i);
    }
}