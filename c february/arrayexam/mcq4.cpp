#include<iostream>
using namespace std;
int main(){
   int a[5]={10,20,30,40,50};
   for(int i=0;i<5;i++){
   	a[i]=(a[i]+20);
   	printf("%d\n",a[i]);
   }
	return 0;
}

