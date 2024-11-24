#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *ptr;
  char line[100];
  ptr=fopen("C:\\Users\\HI\\Desktop\\lite bill payment\\pooja.txt","r");
  if(ptr==NULL)
  {
  	printf("\n file not available");
  }
  else{
  	fgets(line,100,ptr);
  	printf("\n %s",line);
  }
  fclose(ptr);
}
