

#include <stdio.h>

int main()
{
    int op1,op2;
    char opr;
    printf("Enter Number1:" );
    scanf("%d",&op1);
    printf("\nEnter the operator:" );
    scanf(" %c",&opr);
    printf("\nEnter Number2: ");
    scanf("%d",&op2);
    switch(opr)
    {
        case('+'):
            printf("Addition:%d",op1+op2);
            break;
        case('-'):
            printf("Subtraction  :%d",op1-op2);
            break;
        case ('*'):
            printf("Multiplication  :%d",op1*op2);
            break;
        case ('/'):
            printf("Division  :%d",op1/op2);
            break;
        default:
            printf("Invalid input");
        
    }
    return 0;
}

