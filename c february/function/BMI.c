#include<stdio.h>
int main()
{
	void BMIF(int,float);
	int weight;
	float height;
	printf("\nEnter weight and height:");
	scanf("%d%f",&weight,&height);
	BMIF( weight, height);
	return 0;
}
void BMIF(int weight,float height)
{
	int BMI;
	BMI=weight/(height*height);
	printf("%f",BMI);
}
