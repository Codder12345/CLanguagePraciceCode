#include<stdio.h>
int main()
{ static int array[10] = {1,2,3,4,5,6};
int i;
for (i = 0 ; i <= 9 ; i++)
printf ("%d\t",array[i]);
return 0;
}
