#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float rate ,pamt,t,ci;
	printf("Enter value=");
	scanf("%f%f%f",&pamt,&rate,&t);
	ci=pamt*(pow((1+rate/100),t));
	printf("\n compound interest=%f",ci);
	return 0;
	
}
