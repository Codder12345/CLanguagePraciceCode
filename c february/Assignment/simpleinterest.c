#include<stdio.h>
int main()
{
	float SI,P,R,T;
	printf("\nEnter principle amount =");
	scanf("%f",&P);
	printf("Enter Time=");
	scanf("%f",&T);
	printf("\nEnter Rate=");
	scanf("%f",&R);
	SI=P*T*R/100;
	printf("simple interest=%f",SI);
	return 0;
}
