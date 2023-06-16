
#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements of the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
	
	for(int j=0;j<n;j+2)
	{
		sum=sum+a[j];
	
	}

	printf("The Alternate sum is: %d",sum);

	return 0;
}

