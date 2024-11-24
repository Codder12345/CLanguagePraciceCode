#include<iostream>
#include<string.h>
using namespace std;

class insertArray{
	int *c;
   public:
	void setArraychar(int ch[])
{
   c=ch;
}

void insertvalueonindex()
{
	int index, value,i;
cout<<"Enter index"<<endl;
cin>>index;
cout<<"Enter value"<<endl;
cin>>value;
for(i=6;i>index;i--)
{
	c[i+1]=c[i];
}
c[index]=value;
cout<<"After inser index";
for(i=0;i<6;i++)
{
	cout<<*(c+i);
}
}
};
int main(){
	int a[5],i;
	cout<<"Enter array element";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	insertArray a1;
	a1.setArraychar(a);
	a1.insertvalueonindex();
	return 0;
}
