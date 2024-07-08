#include <stdio.h>
int main()
{int i=1;
    while(i<=5)
    {
        printf("Hello World\n");
        i++;
    }
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int j=0;
    while(j<=n)
    {
        printf("%d \n",j);
        j++;
    }
}