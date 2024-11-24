#include<stdio.h>
int main()
{
	void naturalno(int);
	int no; 
	printf("Enter number");
	scanf("%d",&no);
	naturalno(no);
	return 0;
	
}
int naturalno(int no)

{
	int f;
    f=naturalno(no-1);	
    printf("%d",no);
}
