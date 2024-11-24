#include<iostream>
using namespace std;
int main(){
   int a[5]={10,20,30,40,50};
    int *ptr;
    ptr=a;
    for(int i=0; i<5;i++){
    	*ptr=*ptr+10;
    	printf("%d\n",a[i]);
    	ptr++;
	}
  	return 0;
}

