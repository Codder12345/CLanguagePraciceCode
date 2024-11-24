#include<stdio.h>
#include<conio.h>
int main()
{
  int temp;
  printf("\n Enter temperature in centigrade=");
  scanf("%d",&temp);
  temp<0  ?  printf("Freezing Weather.."):
  temp>0  && temp<=10 ?printf("Very cold weather..") : 
  temp>10 && temp<=20?printf("Cold wether.."):
  temp>20 && temp<=30 ?printf("Normal weather.."):
  temp>30 && temp<=40 ?printf("its Hot.."):
  printf("Very Hot..");
}
