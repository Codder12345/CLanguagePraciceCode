#include<stdio.h>
int main()
{
	int  s1,i,k,j;
	printf("\n Enter siz1 of array:");
	scanf("%d",&s1);
	int a[s1];
	int b[s1];
	printf("\n Enter array element:");
	for(i=0;i<s1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter position we have to rotate from that :");
	scanf("%d",&k);
}
  int j=0;
  for(i=0;i<=k;i++)
{
	b[j]=a[i];
	j++;
}
//final array after rotation from position 
for(i=0;i<s1;i++)
{
	printf("%d",b[i]);
}
return 0;
