#include<iostream>
using namespace std;
class Factorial{
	protected:
		int no;
		public:
		void setNo(int no)
		{
			this->no=no;
		}
};
class Reversno:public Factorial
{
	public:
		int getrevers()
		{
			int rev;
			for(i=0;no!=0;i++)
			{
				rev=(no%10)*10(no/10);
				
			}
			return rev;
		}
};
