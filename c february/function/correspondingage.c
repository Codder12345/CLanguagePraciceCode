#include<stdio.h>
int main()
{
	int age_group(int);
	int age;
	printf("\n Enter age from user:");
	scanf("%d",&age);
	age_group(age);
	return 0;
}
int age_group(int age)
{
if(age>=0 && age<=6)
{
	printf("age group is kid ");
}
else if(age>6 && age<=14){
	printf("child");
}
else if(age>14 && age<=18)
{
	printf("teenager");
}
else if(age>18 && age<=35)
{
	printf("young");
}
else if(age>35 && age<=50)
{
	printf("Adult person");
}
else
{
	printf("senior citism");
}
}
