#include<iostream>
using namespace std;
int main(0)
{
	 FILE *ptr;
	 ptr=fopen("C:\\Users\\HI\\Desktop\\lite bill payment\\abc.txt","r");
	 if(ptr==NULL)
	 {
	 	cout<<"File is not available";
	 }
	 return 0;
}
