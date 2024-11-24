#include<stdio.h>
int main()
{
	int i,j,n,sum,rem,f;
	printf("Enter limit");
	scanf("%d",&n);
	while(i<=n)
	{
		j=i;
		f=0;
		
		while(j!=0)
		{
			rem=j%10;
			if(rem==0)
			{
				f=1;
			break;
			}
			j=j/10;
 
		}
		if(f==1)
		{
			printf("%d\n",i);
		}
		i++;
	}
	
}
