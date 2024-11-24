#include<stdio.h>
#include<conio.h>
int main()
{int size,*ptr,i;
printf("Enter  how much memory u required\n");
scanf("%d",&size);
for(i=0;i<size;i++)
{
	scanf("%u",(ptr+i));
}
for(i=0;i<size;i++)
{
	printf("%u",*(ptr+i));
	ptr++;
}
	return 0;
	
}
