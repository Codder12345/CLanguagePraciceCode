#include<stdio.h>
int main()
{ static int a[]={2,3,4,5,6};
int i;
for (i = 5 ; i > 0;)
printf ("%d ",a[--i]);
return 0;
}
