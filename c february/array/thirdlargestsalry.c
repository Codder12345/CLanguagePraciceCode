#include<stdio.h>
struct Employee{
	int id;
	char name[30];
	float sal;
};
struct Empoyee e[5];
int main()
{
	for(i=0;i<5;i++)
	{
		scanf("%d %s %f",&e[i].id,&e[i].name,&e[i].sal);
	}
		for(i=0;i<5;i++)
	{
		printf("%d %s %f",e[i].id,e[i].name,e[i].sal);
	}
	
}
