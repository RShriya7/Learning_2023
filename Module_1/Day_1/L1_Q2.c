#include <stdio.h>

int main()
{
    int a;
    printf("Enter the marks\n");
    scanf("%d",&a);
    if(a>=90 && a<=100)
    {
        printf("Grade A");
    }
    else if(a>=75 && a<=89)
    {
        printf("Grade B");
    }
    else if(a>=60 && a<=74)
    {
        printf("Grade C");
    }
    else if(a>=50 && a<=59)
    {
        printf("Grade D");
    }
    else 
    {
        printf("Grade F");
    }
    
    return 0;
}

