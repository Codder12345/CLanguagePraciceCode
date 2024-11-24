#include<stdio.h>
int main()
{
	void call_bill(float);
	float  call;
	printf("\n Enter monthlyTelephone bill from user:");
	scanf("%f",&call);
	 call_bill(call);
	return 0;
}
void call_bill( float call)
{
	float Telbill;
	if(call<=100)
	{
		Telbill=200;
	}
	else if(call>100 && call<=150)
	{
		call=call-100;
		Telbill=200+(0.60*call);
		
	}
	else if(call>150 && call<=200)
	{
		call=call-150;
	 	Telbill=200+(0.60*50)+(0.50*call);
	
	}
	else
	{
		call=call-200;
		Telbill=200+(0.60*50)+(0.50*50)+(0.40*call);
	}

 	printf("%f",Telbill);
}
