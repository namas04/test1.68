#include<stdio.h>
void main()
{
   char name[10];
   int height;
   printf("Enter name : ");
   scanf("%s",&name);
   printf("Enter height (cm.) : ");
   scanf("%d",&height);
   printf("Output : \n\tname \t%s\n\theight \t%d cm.",name,height);
}