#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	void strup(char ch[]);
	char ch[90];
	printf("\n Enter  string array");
	gets(ch);
	strup(ch);
	return 0;
}
  void strup(char ch[])
  {
  	int i;
  	for(i=0;i<=ch[i]!='\0';i++)
  	{
  		if(ch[i]>='A' && ch[i]<='Z')
  		{
  			ch[i]=ch[i]+32;
		  }
		  else{
		  	ch[i]=ch[i]-32;
		  }
	  }
	  printf("%s",ch);
  }
