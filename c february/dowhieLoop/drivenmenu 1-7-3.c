#include<stdio.h>
int main()
{
	int n,ch,limit,i,j,f=1,count,sum,rem,temp,fact;
do{
	printf("\n1:Display 1 to n prime number:");
	printf("\n2:Display 1 to n perfect number:");
	printf("\n3:Display 1 to n Duck number=");
	printf("\n4:Display 1 to n strong number:");
	printf("\n5:Display 1 to n Armstrong number:"); 
    printf("\nEnter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		i=2,j=2;
	printf("\nEnter  number=");
	scanf("%d",&limit);
	
    while(j<=limit)
   {
	
    count=0;
		while(i<=j/2)
	{
		if(j%i==0)
		{
		  count++;
		}
		i++;
	}
	if(count==0)
	{
		printf("\n%d",j);
	
	}
	j++;

   } 
		break;
		
  case 2:
  	i=1;
	printf("Enter limit");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=0;
		j=1;
		while(j<i)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
			j++;
		}
		if(sum==i)
		{
			printf("%d\n",i);
		}
		i++;
	}
		break;
		
		case 3:
         i=1;
		printf("Enter limit");
	    scanf("%d",&n);
	while(i<=n)
	{
		sum=0;
		f=0;
		while(j<=i)
		{
			rem=i%10;
			if(rem==0)
			{
				f=1;
			
			}
			j++;
		}
		if(f==1)
		{
			printf("%d\n",i);
		}
		i++;
		
	}
		break;
		
		case 4:
			i=1;
			printf("Enter limit");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=0;
		temp=i;
		
		while(temp!=0)
		{
			rem=temp%10;
			fact=1,j=1;
			while(j<=rem)
			{
				
				fact=fact*j;
				j++;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		
		if(sum==i)
		{
			printf("\n%d",i);
		}
		i++;
	}
		break;
		
		case 5:
		break;
		
		case 0:
		printf("Exit");
		break;
		default:
		printf("Invalid choice please select valid choice.");	
	}
}
while(ch!=0);
return 0;
}
