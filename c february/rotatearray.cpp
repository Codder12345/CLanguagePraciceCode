#include<iostream>
using namespace std;
int main()
{
	int s1,s2,i,j,k;
	cout<<"Enter array size";
	cin>>s1;
	int a[s1];
	int b[s1];
	for(i=0;i<s1;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter k value";
	cin>>k;
	j=0;
	for(i=k;i<s1;i++)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<k;i++)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<s1;i++)
	{
		cout<<b[i];
	}
	return 0;
}
