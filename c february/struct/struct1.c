#include<stdio.h>
int main()

{
	
struct Employee
{
	int id;
	char name[100];
	float salary;
	
};
struct Employee e;
printf("\n Enter employee id name and sal from users");
scanf("%d %s %f",&e.id,&e.name,&e.salary);

printf("\tid %d \t  %s name\t %f salary",e.id,e.name,e.salary);
return 0;
}
