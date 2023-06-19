

#include <stdio.h>
#include <stdlib.h>
void ei_oi(int a[], int n);

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        
    }
    for(int i=0;i<n;i++)
    {
        
        printf(" %d\n",a[i]);
    }
    ei_oi(a,n);
    return 0;
}

void ei_oi(int a[],int n)
{
    int oisum=0,eisum=0;
    for(int i=0;i<n;i++)
    {
        if((i&1)==1)
        {
            oisum=oisum+a[i];
        }
        else
        {
            eisum=eisum+a[i];
        }
    }
    printf("Odd  Indexed Sum::%d\n",oisum);
    printf("Even Indexed Sum::%d\n",eisum);
}
