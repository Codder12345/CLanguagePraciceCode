#include<stdio.h>
int main()
{
	int size,a,i,*ptr;
	printf("Enter size");
	scanf("%d",&size);
for(i=0;i<size;i++)
{
	scanf("%d",&ptr);
	ptr++;
}
ptr=ptr-size;
for(i=0;i<size;i++)
{
	printf("%u-->%d",ptr,*ptr);
	ptr++;
}
return 0;
}
