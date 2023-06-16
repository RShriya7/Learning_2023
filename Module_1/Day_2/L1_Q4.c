

#include <stdio.h>
int count_bits(int a[],int n);
int main()
{
    //0x1, 0xF4, 0x10001
    int n,ans=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    unsigned int a[n];
    printf("enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%x",&a[i]);
    }
     ans=count_bits(a,n);
    printf("%d",ans);
    
    return 0;
}

int count_bits(int a[],int n)
{
     int count=0;
     int total=0;
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        while(num!=0)
        {
            count=count+(num&1);
            num=num>>1;
        }
        
        total =total+count;
        count=0;
    }
    return total;
    
    
}

