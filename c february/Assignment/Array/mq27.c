#include<stdio.h>
int main()
{
static int a[ ] = {10,20,30,40,50};
int j ;
for (j = 0 ; j < 5; j++)
{ printf ("%d",*a);
  a++;
}
return 0;
}
