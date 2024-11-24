#include<stdio.h>
#include<conio.h>
int main()
{
	void circle(int);
   int radius;
   printf("\n Enter radius of a circle=");
   scanf("%d",&radius);
   circle(radius);
   getch();
}
  void circle(int radius)
{
	double dimeter,area,circomeference;
	float pi=3.14f;
	area=pi*radius*radius;
	dimeter=2*radius;
	circomeference=2*pi*radius;
	printf("\n Area :%d",area);
	printf("\n dimeter: %d",dimeter);
	printf("\n cercomeference :%d",circomeference);
}
