#include <stdio.h>
#include <stdlib.h>
struct course 
{
  int m;
  char sub[30];
};

int main() 
{
  struct course *s;
  int no_rec;
  printf("Enter the number of records: ");
  scanf("%d", &no_rec);

  s= (struct course *)malloc(no_rec * sizeof(struct course));
  for (int i = 0; i < no_rec; ++i) {
    printf("Enter subject and marks:\n");
    scanf("%s %d", (s+ i)->sub, &(s + i)->m);
  }

  printf("Displaying Information:\n");
  for (int i = 0; i < no_rec; ++i) {
    printf("%s\t%d\n", (s + i)->sub, (s + i)->m);
  }

  free(s);

  return 0;
}
