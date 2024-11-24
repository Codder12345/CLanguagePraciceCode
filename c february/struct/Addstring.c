#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *ptr;
  ptr=fopen("C:\\Users\\HI\\Desktop\\lite bill payment\\sayali.txt","w");
  if(ptr==NULL)
  {
  	printf("\n not available");
  }
  else{
  	   fputs("HI i am sayali",ptr);
  }
  fclose(ptr);
  return 0;
}
