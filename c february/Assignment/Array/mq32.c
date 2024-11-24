#include<stdio.h>
int main()
{ int arr[] = {0,1,2,3,4} ;
int *ptr, i;
for (ptr = arr + 4 ; ptr >= arr; ptr--)
printf ("%d\t", arr [ptr-arr]);
return 0;
}

