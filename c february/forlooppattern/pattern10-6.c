#include<stdio.h>
int main()
{
  int i,j;
  char ch=65;
  for(i=1;i<=5;i++)
  {
  	for(j=1;j<=5;j++)
  	{
  		if(i<=j)
  		{
  			printf("%c",ch);
		  }
		  else
		  {
		  	printf(" ");
		  }
	  }
	  ch++;
	  printf("\n");
  }
}
