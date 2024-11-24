#include<stdio.h>
int main(){
int i,j,k;
i=j=k=1;
int a[5]={10, 20,30,40,50};
int b=a [1];
b+=10;
a[i+1]=--b+1;
int c=a[j++];
int d=a[j+1];
printf("B= %d\tC=%d\tD=%d\n",b,c,d);
return 0;
}

