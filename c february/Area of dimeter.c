#include<stdio.h>
#include<conio.h>
int main()
{
	int radius,dimeter,area,cir;
	float pi=3.14f;
	printf("Enter radius of a circle=");
	scanf("%d",&radius);
	dimeter=2*radius;
	cir=2*3.14*radius;
	area=3.14*radius*radius;
	printf("\nDimeter=%d",dimeter);
	printf("\ncircomference=%d",cir);
	printf("\nArea of circle=%d",area);
	return 0;
}
