

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            ch[i]=ch[i]+32;
        }
        else if(ch[i]>=97 && ch[i]<=122)
        {
            ch[i]=ch[i]-32;
        }
    }
    printf(" Typecasted String :%s",ch);
    return 0;
}

