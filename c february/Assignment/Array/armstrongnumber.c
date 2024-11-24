#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,temp,sum=0,rem;
	int a[i];
	printf("\n Display armstrong number between 1 to n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	   temp=a[i];
	   rem=a[i]%10;
	   while(rem!=0)
	   {
	   	int p=1,j=1;
	   	if(j<=3)
	   	{
	   		p=p*rem;
	   		j++;
		   }
		   sum=sum+p;
	   }
	   a[i]=a[i]/10;
	   if(sum==temp)
	   {
	   	printf("%d",a[i]);
	   }
	}
	return 0;
}
