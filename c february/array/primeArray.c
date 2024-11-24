#include<stdio.h>
int main()
{
	int n,i,j,f;
	printf("\n Enter size of array:");
	scanf("%d",&n);
	int a[i];
printf("Enter array element:");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	f=0;
	for(j=2;j<n;j++)
	{
		if(n%j==0)
       {
	    f=1;
	    break;
       }
	}
	if(f==0)
	{
		printf("%d",n);
	}
}


}
