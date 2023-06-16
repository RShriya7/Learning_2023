#include<stdio.h>
void printExponent(double a)
{
	unsigned long long int* ptr=(unsigned long long int*)&a;
	unsigned long long int exp=(*ptr>>52)&0x7FF;
	printf("Exponent(Hexadecimal):0x%llx\n",exp);
	printf("Exponent(Binary):0b");
	
	
	int i;
	for(i=10;i>=0;i--)
	{
		printf("%lld",(exponent>>i)&1);
	}
	printf("\n");
}


int main()
{
	double x;
	scanf("%lf",&x);
	printfExponent(x);
return 0;
}
