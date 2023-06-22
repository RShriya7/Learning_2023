

#include <stdio.h>

struct meas
{
    int l;int b;
    int h;
    
};
typedef struct meas Box;
void init( struct meas*);
void disp(struct meas);
void v_tsa(struct meas*);

int main()
{
    Box s;
    init(&s);
    disp(s);
    //printf("%d\n %d\n %d\n",s.l,s.b,s.h);
    v_tsa(&s);

    return 0;
}

void init(struct meas* s)
{
    printf("enter the elememts:");
    scanf("%d",&s->l);
    scanf("%d",&s->b);
    scanf("%d",&s->h);
    
}
void disp(struct meas s)
{
    printf("Length :%d\nBreadth:%d\nHeight:%d\n",s.l,s.b,s.h);
}

void v_tsa(struct meas* s)
{
    int vol=(s->l)*(s->b)*(s->h);
    printf("volume %d\n",vol);
    int tsa=2*(((s->l)*(s->b))+((s->b)*(s->h))+((s->l)*(s->h)));
    printf("TSA:%d",tsa);
}
