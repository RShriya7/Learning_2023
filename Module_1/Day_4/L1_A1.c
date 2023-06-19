#include<stdio.h>
#include<stdlib.h>
void s_a(int a[],int n);
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
    s_a(a,n);
    return 0;
}

void s_a(int a[],int n)
{
    int sum=0,avg=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("Sum=%d\n Average=%d",sum,avg);
}
