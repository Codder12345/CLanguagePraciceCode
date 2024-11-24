
#include<stdio.h>
int main()
{
int arr1[10],arr2[10], i;
for (i = 0 ; i <= 9 ; i++)
{ arr1[i]= 'A' + i;
arr2[i] = 'a' + i;
printf ("%d\n", arr2[i]-arr1[i]);
}
return 0;
}
