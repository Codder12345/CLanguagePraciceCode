#include<stdio.h>
#include<conio.h>
int main()
{
	int phy,che,ca,tot,Rollno;
	float per;
	printf("\nInput the rollno of a student=");
	scanf("%d",&Rollno);
	printf("\nEnter marks of subject physcis=");
	scanf("%d",&phy);
	printf("\nEnter marks of subject chemistry=");
	scanf("%d",&che);
	printf("\n Enter marks of subject compute application=");
	scanf("%d",&ca);
	tot=phy+che+ca;
	per=tot/3;
	printf("\nmarks in physics=%d",phy);
	printf("\nmarks of chemistry=%d",che);
	printf("\n marks of computer applicartion=%d",ca);
	printf("\n total=%d",tot);
	printf("\n percentage=%f",per);
	
	per>70?printf("\n First"):per>40?printf("\n Second"):printf("\nThird");
	
	return 0;
}
