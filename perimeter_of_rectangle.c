#include <stdio.h>
 
int main()
{
    float a,b,perimeter;
    printf("Enter side a:");
    scanf("%f",&a);
    printf("Enter side b:");
    scanf("%f",&b);

    perimeter=2*(a+b);
    printf("Perimeter of circle is %f",perimeter);
    return 0;
}
