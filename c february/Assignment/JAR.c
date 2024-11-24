#include<stdio.h>
int main()
{
	int n=10,k=5,m;
	printf("Enter  value of m=");
	scanf("%d",&m);
	switch(m<=k && m<= n)
	{
		case 1:
			printf("\ncandidate sold :%d",m);
			printf("\navailable cadidate:%d",n-m);
			break;
			case 0:
				printf("JAR is Full.");
				break;
				default:
					printf("Invalid m.");
					printf("Number of candidate Left 10.");
	}
}
