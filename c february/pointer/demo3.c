#include<stdio.h>
	#include<conio.h>
	void main(){
	   int size,*ptr,i,j,a[5];
	   printf("\nHow much memory u reuqired\n");
	   scanf("%d",&size);
	   ptr=a;
	   for(i=1; i<=size;i++)
	   { 
	     scanf("%d",ptr);
	     ptr++;
	   }
	   ptr=ptr-size;
	   printf("\ndispay all values\n");
	   for(i=1;i<=size;i++)
	   {
	     for( j=i+1;j<size;j++)
	     {
	      if(ptr[i]>ptr[j])
	      {
	      	int temp=ptr[i];
	      	ptr[i]=ptr[j];
	      	ptr[j]=temp;
	      	
	      }
	     }
	 }
	      for(i=1; i<=size;i++)
	   { 
	     printf("%d",*ptr);
	     ptr++;
	   }
	     
	   getch();
	}

