#include<stdio.h>

int main()
{
	int n,ans=0;;
	printf("Enter the number:");
	scanf("%d",&n);
	
	for(int i=31;i>=0;i--)
	{
		ans=(n>>i)&1;
		printf("%d",ans);
	}
	return 0;
}
