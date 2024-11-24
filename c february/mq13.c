#include <stdio.h>
int main()
{
int y = 1;
if (y & (y = 2))
printf("true %d\n", y);
else
printf("false %d\n", y);
}

