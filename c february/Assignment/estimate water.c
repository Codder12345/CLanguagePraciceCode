#include<stdio.h>
int main()
{
	int weight,minutes;
	printf("Enter weight of estimate=");
	scanf("%d",&weight);
	if(weight>0&&weight<=2000)

{
	printf("Estimate 25m.");
	
}
else if(weight>2000 && weight<=4000)
{
	printf("Estimate 35m.");
}
else if(weight>4000 &&weight<=7000)
{
	printf("Estimate 45m.");
}
else if(weight>7000)
{
	printf("overload.");
}
else
{
	printf("invalid.");
}
return 0;
}

