#include <stdio.h>
void main()
{
  int vote_age;
  char name;

  printf("Enter your name: ");
  gets( &name);
  printf("Enter your age: ");
  scanf("%d",&vote_age);
  if (vote_age<18)
     {
       printf("Sorry, You are not eligible to cast your vote.\n");
     }
  else
     printf("You are eligible for casting your vote.\n");
}
