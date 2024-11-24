#include<stdio.h>
int main()
{
	int i,n,f,j,m;
	int a[i];
	printf("Enter array size");
	scanf("%d",&n);
	printf(" \n Enter array element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		m=a[i];
	f=0;	
	for(j=2;j<m;j++)
	{
	      if(m%j==0)
	      {
	      	f=1;
	      	break;
	}
}
	if(f==0){
		printf("%d",m);
	}
	}
	
	return 0;
}
