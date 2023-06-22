#include<stdio.h>
#include<string.h>
struct demo
{
	int n;
	float f;
};

typedef struct demo Demo;
void init(struct demo*);
void swap(struct demo*,struct demo*);
int main()
{
	Demo d1,d2;
	init(&d1);
	init(&d2);
	printf("Before swapping:\n");
	printf("int1 :%d float1:%.2f\n",d1.n,d1.f);
	printf("int2 :%d float2:%.2f\n",d2.n,d2.f);
	swap(&d1,&d2);
	return 0;
}


void init(struct demo* d)
{
	printf("Enter the values:\n");
	scanf("%d",&d->n);
	scanf("%f",&d->f);
}


void swap(struct demo* d1,struct demo* d2)
{
    Demo d;
    d=*d1;
    *d1=*d2;
    *d2=d;
    printf("After swapping:\n");
    printf("int1 :%d float1:%.2f\n",d1->n,d1->f);
	printf("int2:%d float2:%.2f",d2->n,d2->f);
}
