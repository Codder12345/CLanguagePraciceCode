#include<stdio.h>
#include<conio.h>
#include<string.h>
int temp;
int main()
{
int i,ch,temp,j,deleteId,searchId,f1=0,UpdateId;
	struct FastFoodcenter
	{
		int id;
		char name[50];
		int price;
	};
	struct FastFoodcenter f[3];

do{

	printf("\n 1: Add Food details");
	printf("\n 2:  Display of Food details:");
	printf("\n 3:  Update Food Details by Id Name:");
	printf("\n 4: Delete Food details by  id:");
	printf("\n 5:  Search Food details by name or id:");
	printf("\n 6: parchese Food:");
    printf("\n 7: Display Bill:");

	printf("\n 0: Exit.");
	printf("\n Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
   case 1:
  for(i=0;i<3;i++)
  {
	printf("\n Add Food details id name price:");
	scanf("%d %s %d",&f[i].id,&f[i].name,&f[i].price);
  }  	
   break;
   
   case 2:
   	printf("\n Dispaly  Food Details .");
   	for(i=0;i<3;i++)
{
	printf("\n%d %s %d",f[i].id,f[i].name,f[i].price);
}
   break;
   
   case 3:
   	printf("\n Enter  Id for udate data:");
   	scanf("%d",&UpdateId);
   for(i=0;i<3;i++)
   {
   	for(j=i+1;j<3;j++)
   	{
   	  if(f[i].id==UpdateId)
   	  {
   	  	printf("\n Enter id   name  price: ");
   	   scanf("\n %d %s %d",&f[i].id,&f[i].name,&f[i].price);
		 }
	   }
   }
   		printf("\n Dispaly all product Decending order.");
   	for(i=0;i<3;i++)
{
	
	printf("\n%d %s %d",f[i].id,f[i].name,f[i].price);
}
   break;
   
   case 4:
   	printf("\n Enter delete id:");
   	scanf("%d",&deleteId);
   	 for(i=0;i<3;i++)
   	{
   		if(f[i].id==deleteId)
   		{
   		   temp=f[i].id;
   		   f[i].id=f[i+1].id;
   		   f[i+1].id=temp;
		   }
	   }
	   printf("\n Display remening data:");
	   	for(i=0;i<3;i++)
{
	
	printf("\n%d %s %d",f[i].id,f[i].name,f[i].price);
}
   break;
   
   case 5:
 printf("\n Enter search id from user:");
   	scanf("%d",&searchId);
   	 for(i=0;i<3;i++)
   	{
   		if(f[i].id==searchId)
   		{
   		  f1=1;
		   }
	   }
	 if(f1==1)
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
   	  if(f[i].price==f[j].price)
   	  {
   	  		printf("\n  id%d \t name%s \t price%d",f[i].id,f[i].name,f[i].price);
   	printf("\n  id%d \t name%s \t price%d",f[j].id,f[j].name,f[j].price);
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

