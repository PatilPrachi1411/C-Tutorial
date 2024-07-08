#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("Enter the number :");
    scanf("%d",&n);

for(i = 2; i <= n/ 2; i++)
{
    if(n%i==0)
    {
        temp++;
        break;
    }
}

    if(temp == 0 && n != 1)
    {
        printf("No.is prime no");
    }
    else
    {
        printf("not prime no.");
    }

return 0;
}
