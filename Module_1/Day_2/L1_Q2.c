#include<stdio.h>
void swap(void* a,void* b,size_t n);
int main()
{
	int a,int b;
	printf("Enter the data :");
	scanf("%d%d",&a,&b);
	printf("Before swapping:%d %d",a,b);
	swap(&a,&b,sizeof(int));
	printf("After swapping : %d %d",a,b);
	
	/*
		float a,b;
		printf("Enter the data :");
		scanf("%f%f",&a,&b);
		printf("Before swapping:%.2f %.2f",a,b);
		swap(&a,&b,sizeof(float));
		printf("\nAfter swapping : %.2f %.2f",a,b);
		
		char a,b;
		printf("Enter the data :");
		scanf("%c %c",&a,&b);
		printf("Before swapping:%c %c",a,b);
		swap(&a,&b,sizeof(char));
		printf("\nAfter swapping : %c %c",a,b);
	*/
return 0;
}

void swap(void* a,void* b,size_t n)
{
	char* ptr1=(char*)a;
	char* ptr2=(char*)b;
	char temp;
	 for(size_t i=0;i<n;i++)
	{
		temp=*(ptr1+i);
		*(ptr1+i)=*(ptr2+i);
		*(ptr2+i)=temp;
	
	}


}
