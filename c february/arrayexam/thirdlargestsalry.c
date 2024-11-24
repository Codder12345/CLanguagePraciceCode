#include<stdio.h>
struct Employee{
	int id;
	char name[30];
	float sal;
};
struct Employee e[5];
int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("\n Enter id name and salary:");
		scanf("%d %s %f",&e[i].id,&e[i].name,&e[i].sal);
	}
	printf("\t ID  \t Name  \t Salary\n ");
		for(i=0;i<5;i++)
	{
		printf("\n %d %s %f\n",e[i].id,e[i].name,e[i].sal);
	}
		for(i=0;i<5;i++)
	{
      for(j=1+1;j<5;j++)
      {
    if(e[i].sal>e[j].sal)
	{
		int temp=e[i].sal;
		e[i].sal=e[j].sal;
		e[j].sal=temp;
	}
	  }
	}
	int k;
		for(i=0;i<5;i++)
	{
		k=e[3].sal;
	}
	printf(" largest third salary is %d",k);
	
	return 0;
}
