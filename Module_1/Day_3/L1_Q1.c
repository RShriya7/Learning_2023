

#include <stdio.h>
void p_num(int n);
void p_revnum(int n);
void p_spaces(int n);

int main()
{
    int n=5;
    
        p_num(n);
        //p_spaces(n);
        //p_revnum(n);
        printf("\n");

    
    return 0;
}

//numbers
void p_num(int n)
{
    for(int i=n;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        p_spaces(n);
        //p_revnum(n);
    }
}


//spaces
void p_spaces(int n)
{
        int i=n;
    
        for(int j=1;j<=2*(n-i);j++)
        {
            printf(" ");
        }
        i=i--;
    
}


//numbers
void p_revnum(int n)
{
    for(int i=n;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}



