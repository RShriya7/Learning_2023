#include<stdio.h>

int main()
{
    char ch[9];
    printf("Inital time:");
    scanf("%s",ch);
    int hours=(((ch[0]-48)*10)+(ch[1]-48))*3600;
    int min=(((ch[3]-48)*10)+(ch[4]-48))*60;
    int sec=(((ch[6]-48)*10)+(ch[7]-48));
    int total = hours+min+sec;
    printf(" Time in Secs :%d",total);
    return 0;
}
