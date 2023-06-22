
 #include <stdio.h>
struct time
{
	int h;
	int m;
	int s;
};

typedef struct time Time;
void init(struct time*);
void t_diff(struct time,struct time);
int main()
{
	Time t1,t2;
	init(&t1);
	init(&t2);
	printf("TIME PERIOD 1: \nHours :%d\n Minutes :%d\n Seconds :%d",t1.h,t1.m,t1.s);
	printf("TIME PERIOD 2: \nHours :%d\n Minutes :%d\n Seconds :%d",t2.h,t2.m,t2.s);
	t_diff(t1,t2);
	
	
	return 0;
}


void init(struct time* t)
{
	printf("Enter the hours, mins and secs: \n");
	scanf("%d",&t->h);
	scanf("%d",&t->m);
	scanf("%d",&t->s);
}

void t_diff(struct time t1,struct time t2)
{
	Time res;
	int sec1=(t1.h)*3600 + (t1.m)*60 +t1.s;
	int sec2=(t2.h)*3600 + (t2.m)*60 +t2.s;
	
	int totsec=sec2-sec1;
	res.h=totsec/3600;
	res.m=(totsec%3600)/60;
	res.s=(totsec%3600)%60;
	printf("\nDifference in \n Hours:%d\n Minutes :%d\n Seconds:%d\n",res.h,res.m,res.s);
}

