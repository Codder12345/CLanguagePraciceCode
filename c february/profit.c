#include<stdio.h>
#include<conio.h>
int main()
{
int sp,cp;
printf("\nEnter selling price and cost price=");
scanf("%d %d",&sp,&cp);
sp>cp?printf("profit=%d",sp-cp):printf("Loss=%d",cp-sp);
return 0;


}
