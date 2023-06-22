#include<stdio.h>

struct complex
{
    float r;
    float i;
};

typedef struct complex Num;
void init(struct complex*);
void add(struct complex*,struct complex*);
void mul(struct complex*,struct complex*);

int main()
{
    Num n1,n2;
    init(&n1);
     printf("real:%.1f\nImaginary:%.1f\n",n1.r,n1.i);
    init(&n2);
    printf("real:%.1f\nImaginary:%.1f",n2.r,n2.i);
    add(&n1,&n2);
    mul(&n1,&n2);
    
    return 0;
}

void init(struct complex* n)
{
    printf("Enter real and complex values:");
    scanf("%f",&n->r);
    scanf("%f",&n->i);
}

void add(struct complex* n1,struct complex* n2)
{
    struct complex temp;
    temp.r=n1->r + n2->r;
    temp.i=n1->i + n2->i;
    printf("\nAddition : %.1f + %.1f",temp.r,temp.i);
}

void mul(struct complex* n1,struct complex* n2)
{
    struct complex temp;
    temp.r=((n1->r)*(n2->r))-((n1->i)*(n2->i));
    temp.i=((n1->r)*(n2->i))+((n1->i)*(n2->r));
    printf("\nMultiplication:%.1f + i %.1f",temp.r,temp.i);
}
