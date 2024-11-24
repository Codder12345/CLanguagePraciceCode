#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
     char s1[1000];
    int i;
 
    printf("Enter the String: ");
    scanf("%s",&s1);
   for(i=0;s1[i]!='\0';++i)
   {
   	printf("%d",i);
   }
    printf("%d",s1);

   return 0;
}
