#include<stdio.h>
int main()
{
 FILE *ptr;
 char ch[100];
 ptr=fopen("E:\\GiriTCH\\pooja GTH febbatch\\abc.text","w");
 if(ptr==NULL)
 {
 	printf("file is not availabel");
 }
 else{
 	printf("File open");
 		printf("Enter string");
 	    scanf("%s",ch);
 	fputs(ch,ptr);
 		
}
	return 0;
	
}
