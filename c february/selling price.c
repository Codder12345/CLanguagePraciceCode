#include<stdio.h>
#include<conio.h>
int main()
{
int sp,cp;
printf("\nEnter selling price and cost price=");
scanf("%d %d",&sp,&cp);
sp>cp?printf("profit=",sp-cp):printf("Loss=",cp-sp);
return 0;


}
