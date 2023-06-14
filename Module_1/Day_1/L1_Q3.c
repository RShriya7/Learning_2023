#include <stdio.h>

int main()
{
    int rno;
    char name[50];
    float pm,mm,cm;
    printf("Enter the RollNO\n");
    scanf("%d",&rno);
    printf("\nEnter the Student name including Initials\n");
    scanf("%s",name);
    printf("\nEnter Physics,Math and Chemistry Marks\n");
    scanf("%f%f%f",&pm,&mm,&cm);
    float total=(pm+mm+cm);
    printf("Total marks scored :: %.2f\n",total);
    float per=(total/300)*100;
    printf("\nTotal Percentage :: %.2f",per);
    

    return 0;
}

