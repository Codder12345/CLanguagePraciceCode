#include<stdio.h>
int main()
{
	int temp,n,sum,i,ch,rem,f,p,count;
do{
	printf("\n1:check  number is prime or not");
	printf("\n2: check  no is perfect or not:");
	printf("\n3:check number is  Duck");
	printf("\n4:check number is strong  or not.:");
	printf("\n5:check number is  Armstrong  or not:"); 
    printf("\nEnter your choice=");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		break;
		
  case 2:
      i=1,sum=0;
      printf("\nEnter number=");
      scanf("%d",&n);
      temp=n;
      while(i<=n)
      {
      	if(n%i==0)
      	{
      		sum=sum+i;
		  }
		  i++;
	  }
	  if(temp==sum)
	  {
	  	printf("\n %d is perfect number.",temp);
	  }
	  else{
	  	printf("\n %d is not perfect no.",temp);
	  }
		break;
		case 3:
        printf("\nEnter number=");
        scanf("%d",&n);
        while(n!=0)
        {
        rem=n%10;
        n=n/10;
        f=0;
        if(rem==0)
        {
        	f=1;
        	break;
		}
		}
	     f==1?printf("\n number is Duck."):printf("\n number is Not Duck.");
		break;
		
		case 4:
		
		break;
		
		case 5:
				printf("\n Enter value of n=");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		++count;
		n=n/10;
	}
	n=temp;
	while(n!=0)
	{
		p=1;
		i=1;
		rem=n%10;
		while(i<=count)
		{
			p=p*rem;
			i++;
		}
		sum=sum+p;
		n=n/10;
		
	}
	if(sum==temp)
	{
		printf("number is armstrong\n");
	}
	else{
		printf("not armsrong\n");
	}
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
