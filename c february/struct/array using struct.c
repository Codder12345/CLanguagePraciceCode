#include<stdio.h>
#include<string.h>
int main()
{
	struct Employee
{
	int id;
	char name[30];
	int sal;
};
struct Employee emp[5];	
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter id name and sal");
		scanf("%d%s%d",&emp[i].id,&emp[i].name,&emp[i].sal);
	}
	for(i=0;i<5;i++)
	{
	 printf("%d %s %d\n",emp[i].id,emp[i].name,emp[i].sal);
	}
return 0;
}
