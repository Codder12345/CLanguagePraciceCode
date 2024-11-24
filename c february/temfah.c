#include<stdio.h>
#include<conio.h>
int main()
{
	float temc,fah;
	printf("Enter tempeature in celsius=");
	scanf("%f",&temc);
      fah=(temc*9/5)+32;	
	printf("\nTempeature convert fahrenheit=%f",fah);
	return 0;
}
