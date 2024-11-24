#include<iostream.h>
using namespace std;

int main() {
   int withdraw;
   double balance;
   cin>>withdraw;
   cin>>balance;
   if(balance>=((double)withdraw+0.5) && (withdraw%5==0))
      balance = balance-withdraw-0.5;
   cout<<balance;
   return 0;
}
