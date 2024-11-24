#include<stdio.h>
   
int main()
{ int  fibo(int x);
  int no;
   printf("Enter number");
    scanf("%d",&no);
      
   int res= fibo(no);
       printf("%d\t",res);	  
}
 int fibo(int no)
 {
 	int f=0;
 	int s=1;
 	int t,i;
 	printf("%d\t %d",f,s);
 	 no-2;

 	if(no>0)
 	{
 		t=f+s;
      	printf("%d \t",t);
 	     f=s;
 	     s=t;
 		 fibo(no-1);
 		  
 		  
 	}
 	
 }
