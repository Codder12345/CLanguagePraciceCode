#include<stdio.h>
int main()
{
int i,j,flag,s1;
printf("Enter size of an array:");
scanf("%d",&s1);
int a[s1];
printf("Enter array element:\n");
for(i=0;i<s1;i++)
{
	scanf("%d",&a[i]);
}
printf("Array is :");
for(i=0;i<s1;i++)
{
	printf("%d",a[i]);
}
printf("\n prime Number form array is:\n");
for(i=0;i<s1;i++)
{
	j=2;
	flag=1;
	while(j<=a[i]/2)
	{
		if(a[i]%j==0)
		{
			flag=0;
			break;
		}
		j++;
	}
	if(flag && a[i]!=1)
	{
		printf("\t%d",a[i]);
	}
}
}
