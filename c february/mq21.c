#include<stdio.h>
int main()
{ printf("%d %d\n", 32<<1, 32<<0);
printf("%d %d\n", 32<<-1, 32<<-0);
printf("%d %d\n", 32>>1, 32>>0);
printf("%d %d\n", 32>>-1, 32>>-0);
return 0;
}
