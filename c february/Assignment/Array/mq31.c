#include<stdio.h>
int main()
{ 
int i ;
static int a[] = {2,4,6,8,10};
for( i=0;i<=4; i++){
*(a+i)=a[i ] + i[a];
printf ("%d\t", *(i + a)) ;
}
return 0;
}

