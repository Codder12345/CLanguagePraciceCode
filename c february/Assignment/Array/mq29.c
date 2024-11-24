#include<stdio.h>
int main()
{
 int n[25];
n[0] = 100;
n[24] = 200;
printf ("%d %d", *n, *(n + 24) + *( n + 0)) ;
return 0;
}

