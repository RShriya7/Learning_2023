

// USING IF ELSE
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",b,a);
    }

    return 0;
}

//USING TERNARY OPERATOR

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    int c=(a>b)?a:b;
    printf("The greater number is %d",c);

    return 0;
}
