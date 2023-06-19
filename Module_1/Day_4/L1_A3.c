

#include <stdio.h>
#include <stdlib.h>
void rev(int a[], int n);

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
        
    }
    printf("Before reverse::\n");
    for(int i=0;i<n;i++)
    {
        
        printf(" %d\n",a[i]);
    }
    rev(a,n);
    return 0;
}

void rev(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[(n-1)-i];
        a[(n-1)-i]=temp;
    }
    printf("After reversing::\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
