#include<stdio.h>
#include<conio.h>
#include<string.h>
int temp;
int main()
{
int i,ch,temp,j,deleteId,searchId,f=0;
	struct Product
	{
		int id;
		char name[50];
		int price;
	};
	struct Product p[3];

do{

	printf("\n 1: store data in structer array");
	printf("\n 2:  view all data from structer array.");
	printf("\n 3:  arrange all products in desending  order by price:");
	printf("\n 4: delete product by its  id and shift index lower side. ");
	printf("\n 5: serach product by name or id:");
	printf("\n 6: find the same price product and display it:");
	printf("\n 0: Exit.");
	printf("\n Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
   case 1:
  for(i=0;i<3;i++)
  {
	printf("\n Enter  product id name and price:");
	scanf("%d %s %d",&p[i].id,&p[i].name,&p[i].price);
  }  	
   break;
   
   case 2:
   	printf("\n Dispaly all product.");
   	for(i=0;i<3;i++)
{
	
	printf("\n%d %s %d",p[i].id,p[i].name,p[i].price);
}
   break;
   
   case 3:
   for(i=0;i<3;i++)
   {
   	for(j=i+1;j<3;j++)
   	{
   	  if(p[i].price<p[j].price)
   	  {
   	  	temp=p[i].price;
   	  	p[i].price=p[j].price;
   	  	p[j].price=temp;
		 }
	   }
   }
   		printf("\n Dispaly all product Decending order.");
   	for(i=0;i<3;i++)
{
	
	printf("\n%d %s %d",p[i].id,p[i].name,p[i].price);
}
   break;
   
   case 4:
   	printf("\n Enter delete id:");
   	scanf("%d",&deleteId);
   	 for(i=0;i<3;i++)
   	{
   		if(p[i].id==deleteId)
   		{
   		   temp=p[i].id;
   		   p[i].id=p[i+1].id;
   		   p[i+1].id=temp;
		   }
	   }
	   printf("\n Display remening data:");
	   	for(i=0;i<3;i++)
{
	
	printf("\n%d %s %d",p[i].id,p[i].name,p[i].price);
}
   break;
   
   case 5:
 printf("\n Enter search id from user:");
   	scanf("%d",&searchId);
   	 for(i=0;i<3;i++)
   	{
   		if(p[i].id==searchId)
   		{
   		  f=1;
		   }
	   }
	 if(f==1)
	 {
	 	printf("\n  Id found.");
	 }
	 else
	 {
	 	printf("\n ID not found");
	 }
   break;
   
   case 6:
   for(i=0;i<3;i++)
   {
   	for(j=i+1;j<3;j++)
   	{
   	  if(p[i].price==p[j].price)
   	  {
   	  		printf("\n  id%d \t name%s \t price%d",p[i].id,p[i].name,p[i].price);
   	printf("\n  id%d \t name%s \t price%d",p[j].id,p[j].name,p[j].price);
		 }
	   }
   }
   	
   break;
   
   case 0:
   	printf("\n Exit");
   break;
   
   default :
   	printf("\n Invalid choice:");
   	break;
   	
	}	
}
while(ch<=6);

 return 0;
}

