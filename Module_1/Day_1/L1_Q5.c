

#include <stdio.h>

int bit_operations(int num, int oper_type );
int main()
{
    int n,opty;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("\nEnter the Operation Type:");
    scanf("%d",&opty);
    
    int res=bit_operations(n,opty);
    printf("The result:%d",res);
    
    
    return 0;
}

int bit_operations(int num, int oper_type )
{
    int  mask=0,res=0;
    switch(oper_type)
    {
        case 1:
            res=num | 1;
            break;
        case 2:
            mask=~(1<<31);
            res=num&mask;
            break;
        case 3:
            mask=(1<<16);
            res=num^mask;
            break;
        default:
            printf("Invalid Operation Type");
        
    }
    return res;
}


