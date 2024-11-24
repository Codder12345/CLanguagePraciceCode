#include<stdio.h>
#include<conio.h>
int main()
{
	float temf,cel;
	printf("Enter tempeature in fahrenheit=");
	scanf("%f",&temf);
	cel=(temf-32)*5/9;
	printf("\nTempeature convert celcius=%f",cel);
	return 0;
}
