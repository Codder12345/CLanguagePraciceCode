#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=11;i++)
    {
    	for(j=1;j<10;j++)
    	{
    		if((j==6-i||j==4+i))
    		printf("*");
    		else
    		printf(" ");
    		
    		if(i==6)
    		{
    			printf("*");
    		else
    		printf(" ");
			}
    		if(i>6)
    		{
    			if(j==i-5)
    			printf("*");
    		    
			}
		
    	
		}
		printf("\n");
    }
	
	
	
	
	
	
	
	return 0;
}
