#include<iostream>
using namespace std;
int main(){
 int a[5]={10,20,30,40,50};
  for(int i=0; i<5; i++){
            printf("%d\t%u\n",*(a+i),(i+a));
   } 
   return 0;
}

