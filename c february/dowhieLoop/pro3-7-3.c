#include<stdio.h>
int main()
{
	int ch,rev,rem,no,count;
	do{
		printf("\n1:revers no:");
		printf("\n2:count digit of number:");
		printf("\n3:calculate sum of even  odd digit from a number:");
		printf("\n4:swap first two digit and last two digit of number:");
		printf("\n5 revers middel number rather than first and last two digit:");
		printf("\n 0:Exit");
		printf("\nEnter your choce:=");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter number from revers:");
				scanf("%d",&no);
				while(no!=0)
				{
					rem=no%10;
					rev=rev*10+rem;
					no=no/10;
				}
				printf("\n rev: %d",rev);
				break;
				case 2:
					printf("\nEnter number=");
					scanf("%d",&no);
					count=0;
					while(no!=0)
					{
						++count;
						no=no/10;
					}
					printf(" count of  digits of a number=%d",count);
					break;
					
					case 3:
						printf("\nEnter value of number=");
						scanf("%d",&no);
					    int  sumE=0,sumO=0,i=1;
						while(i<=no)
						{
							if(i%2==0)
							{
								sumE=sumE+i;
							}
							else{
								sumO=sumO+i;
							}
							i++;
							}
							printf(" sum of even number =%d",sumE);
							printf("sum of oddno =%d",sumO);	
				        break;
					case 0:					
						break;
					default:
						printf("invalid choce.");
		}
	}
	while(ch<=5);
	return 0;
}
