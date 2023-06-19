

#include <stdio.h>
#include <stdlib.h>
void ev_od(int a[], int n);

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
    ev_od(a,n);
    return 0;
}

void ev_od(int a[],int n)
{
    int osum=0,esum=0;
    for(int i=0;i<n;i++)
    {
        if((a[i]&1)==1)
        {
            osum=osum+a[i];
        }
        else
        {
            esum=esum+a[i];
        }
    }
    printf("Odd Sum::%d\n",osum);
    printf("even Sum::%d\n",esum);
}
