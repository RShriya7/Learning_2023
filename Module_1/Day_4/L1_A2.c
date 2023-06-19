#include<stdio.h>
#include<stdlib.h>
void max_min(int a[],int n);
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
        printf("%d\n",a[i]);
    }
    max_min(a,n);
    return 0;
}

void max_min(int a[],int n)
{
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("MAX=%d\n MIN=%d",max,min);
}
