#include<iostream>
using namespace std;
int main(){
  int a[5]={10,20,30,40,50};
    int *ptr;
    ptr=a;
    ptr++;
    *ptr=500;
    for(int i=0;i<5;i++){
              printf("%d\n",a[i]);
	}
  	return 0;
}

