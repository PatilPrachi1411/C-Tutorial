#include <stdio.h>
 
int main()

{
   char ch;
   printf("Enter the character :");
   scanf("%s",&ch); 

   if(ch>='A' && ch<='Z')
   {
    printf("Letter is uppercase letter");
   }
   else if(ch>='a' && ch<='z')
   {
    printf("Letter is lowercase letter");
   }
   else
   {
    printf("not a english letter");
   }

    return 0;
} 
/*
int x=2;
    if(x=1)
    {printf("x");
    printf("%d",x);
    }
    else{printf("not equal");}
*/

/*
    int marks;
    printf("Enter the marks :");
    scanf("%d",&marks);
    if (marks<30)
    {
        printf("Grade C");
    }
    else if(marks>=30 && marks<70)
    {
        printf("Grade B");
    }
    else if(marks>=70 && marks <90)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
/*

/*
    if(marks >= 0 && marks <= 30)
    {
        printf("FAIL");
    }
    else if(marks>=30 && marks<=100)
    {
        printf("PASS");
    }
    else 
    {
        printf("Wrong marks");
    }
   marks >=30 ? printf("Pass") : printf("Fail");
   */
