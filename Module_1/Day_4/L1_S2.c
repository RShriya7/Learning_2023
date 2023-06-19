#include<stdio.h>

int main()
{
    int res=0;
    char ch[50];
    scanf("%s",ch);
	printf("Given string:%s\n",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
     
        res=res*10+(ch[i]-48);
    }
    printf(" String to Integer:%d",res);
    
    return 0;
}
