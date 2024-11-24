#include<stdio.h>
int main(){
int a[5], i;
static int b[5];
for (i = 0; i < 5; i++)
printf ("%d\t%d\t%d\n", i,a[i], b[i]);
return 0;
}

