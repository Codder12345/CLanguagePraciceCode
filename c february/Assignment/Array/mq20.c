#include<stdio.h>
int main(){ static int a[5];
int i;
for(i=0;i<=4;i++){
printf("%d\t%d\n",a[i],i);
}
return 0;
}

