#include<stdio.h>
#include<conio.h>
int main()
{
   char ch,alpha;
   printf("Enter any character=");
   scanf("%c",&ch);
   alpha=ch>='A'&&ch<='Z'||ch>='a'&&ch<='z';
   if(alpha)
   {
   	printf("character is alphabet:%c",ch);
   }
   else
   {
   	printf("character is not alphabet:%d",ch);
   }
   return 0;
}
