#include <stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);

    int sum=0;
    for (int i = n; i >=1; i--)
    {
       sum =sum+i;
       printf("%d \n",i);
       //printf("%d \n",sum);
       
    }
    printf(" Sum of n natural number is %d",sum);

    //for (int i = n; i >=1; i--)
    //{
    //    printf("%d \n",i);
    //}
    
}