#include<stdio.h>
#include<math.h>
int main()
{
	float CI,P,R,T;
	printf("\nEnter principle amount =");
	scanf("%f",&P);
	printf("Enter Time=");
	scanf("%f",&T);
	printf("\nEnter Rate=");
	scanf("%f",&R);
	CI=P*(pow((1+R/100),T));
	printf("simple interest=%f",CI);
	return 0;
}
