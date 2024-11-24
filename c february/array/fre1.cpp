#include<iostream>
#include<conio.h>
using namespace std;
class frequency{
	int *a;
	void setarray(int ch[])
	{
		a=ch;
	}
	void frqcount()
	{
       int count=1,i;
	 for(i=0;i<10;i++)
	 {
		if(a[i]==a[i+1])
		{
			count++;
		}
		else
		{
			cout<<a[i]<<"->"<<count;
			count=1;
		}
	}
	}
};
int main()
{
	int ch[10],i;
	for(i=0;i<10;i++)
	{
		cin>>ch[i];
	}

}
