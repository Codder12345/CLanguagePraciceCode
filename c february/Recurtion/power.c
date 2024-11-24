#include<stdio.h>
int p=1;
void perfect(int,int);
int main()
{
	int index,base;
	printf("Enter number");
	scanf("%d %d",&base,&index);
	perfect(base,index);
	return 0;
}
void perfect(int b,int ind)
{
	if(ind!=0)
{
	p=p*b;
	perfect(b,--ind);
	
}	  
else{
	printf("power is %d",p);

}
}

