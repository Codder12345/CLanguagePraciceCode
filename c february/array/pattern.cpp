#include<iostream>
using namespace std;
int main()
{
	
	int i, j,ch=65;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{
	
				printf(" ");
			}
			else{
//				if(j%2==0)
					printf("%c",ch++);
				
			}
		}
		printf("\n");
	}
}
