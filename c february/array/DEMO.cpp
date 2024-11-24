#include<iostream>
#include<string.h>
int size,i,count=0;
using namespace std;

class Library{
	int ano,bprice;
	char bname[90],aname[90];
	public:
	void setAno(int ano)
	{
		this->ano=ano;
	}
	int getAno()
	{
		return ano;
	}
	void setBookname(char bname[])
	{
		strcpy(this->bname,bname);
	}
	char *getBookname()
	{
		return bname;
	}
	void setAuthorname(char aname[])
	{
	  strcpy(this->aname,aname);
	}
	char *getAuthorname()
	{
		return aname;
	}
	void setBookprice(int bprice)
	{
		this->bprice=bprice;
	}
	int getBookprice()
	{
		return bprice;
	}
};
class Book
{
		private:
		Library *f;
		public:
			void setLibrary(Library f[])
			{
				this->f=f;
			}
	void DisplayBookDetails()
    {
     
           for(int i=0;i<(count+1);i++)
           {
       	    cout<<f[i].getAno()<<"\t";
     	    cout<<f[i].getBookname()<<"\t";
     	    cout<<f[i].getAuthorname()<<"\t";
     	     cout<<f[i].getBookprice()<<"\t";
			  cout<<endl;	
        	 }
    }
    void DisplayallBookAuthor()
    {
    	char sAuthor[90];
    	cout<<"Enter author name";
    	cin>>sAuthor;
    	for(int i=0;i<size;i++)
           {
       	    if(strcpy(f[i].getAuthorname(),sAuthor))
			   {
			   	 cout<<f[i].getAno()<<"\t";
     	         cout<<f[i].getBookname()<<"\t";
     	         cout<<f[i].getAuthorname()<<"\t";
     	          cout<<f[i].getBookprice()<<"\t";
				   }	
        	 }
	}
    
void CountofBook()
{
	int count=0;
 	for(int i=0;i<size;i++)
           {
       	    count++;
        	 }
        	 cout<<"count all Book :"<<count;
}
void AccessionAscending()
{
	for(int i=0;i<size;i++)
           {
       	    for(int j=i+1;j<size;j++)
			   {
			   	if(f[i].getAno()>f[j].getAno())
			   	{
			   		Library temp=f[i];
			   		f[i]=f[j];
			   		f[j]=temp;
				   }
				   }	
        	 }
}
 void Displaytitlbook()
 {
 	char titlebook[90];
 	cout<<"Enter specified book name:";
 	cin>>titlebook;
 	for(int i=0;i<(count+1);i++)
 	{
 		if(strcmp(f[i].getBookname(),titlebook))
 		{
 			cout<<f[i].getAno()<<"\t";
 			cout<<f[i].getBookname()<<"\t";
 			cout<<f[i].getAuthorname()<<"\t";
 			cout<<f[i].getBookprice()<<endl;
		 }
	 }
 }
 void Addnewbook()
 {
 	int ano,bprice;
 	char bname[100],aname[100];
 	
      	cout<<"Enter accessar no bookname Author name bookprice"<<endl;
	    cin>>ano>>bname>>aname>>bprice;
	    for(i=0;i<size;i++)
	    {
	    		    f[i].setAno(ano);
                    f[i].setBookname(bname);
                   	f[i].setAuthorname(aname);
                	f[i].setBookprice(bprice);
	    }
 }
};
int main()
{

	int ch,bprice,ano,num1;
	char bname[90],aname[90];
		cout<<"Enter size:";
	     cin>>size;
		Library f[size];
			int count = 0;
	Book b;
     	do{
     		cout<<"1:Add Bookdetails:"<<endl;
     		cout<<"2:Display BookDetails:"<<endl;
     		cout<<"3:Display allbook Given Authorname:"<<endl;
     		cout<<"4:count of the all book in the library:"<<endl;
     		cout<<"5:Display list the books in the ascending order of accession number:"<<endl;
     		cout<<"6 Displya list the title of specifide book:";
     		cout<<"7:Add new book";
     		cout<<"0 Exit"<<endl;
     		cout<<"Enter your choice:"<<endl;
     		cin>>ch;
     	

     		switch(ch)
     		{
     		     	case 1:
     					cout<<"Addbookdetails"<<endl;
     					cout<<"Count is = "<<count<<"\n";
     					
     					if(count!=size)
     					{
     					
//     					for(int i=0;i<size;i++)
//     					
//                  		{
	            	cout<<"Enter accessar no bookname Author name bookprice"<<endl;
	                	cin>>ano>>bname>>aname>>bprice;
	             	f[count].setAno(ano);
                    f[count].setBookname(bname);
                   	f[count].setAuthorname(aname);
                	f[count].setBookprice(bprice);
                	count++;
                 //	}
                 	
                       }
                 
                 else{
                 	cout<<"Size is full "<<"\n";
                 //	cout<<"DO You want to insert agein "<<"\n";
                 }
	            	b.setLibrary(f);
                   	cout<<endl;
     				break;
     				case 2:
     					cout<<"Dispaly book details"<<endl;
                    	b.DisplayBookDetails();
                    	cout<<"\n";
     					break;
     					case 3:
     						b.DisplayallBookAuthor();
     						cout<<endl;
     						break;
     						case 4:
     							b.CountofBook();
     							cout<<endl;
     							break;
     						case 5:
     							b.AccessionAscending();
							 break;
				              case 6:
				              	b.Displaytitlbook();
				              	break;
				              	case 7:
				              		b.Addnewbook();
				              		break;
     				   default:
     				 cout<<"Enter valid choice:";
     				break;
			 }
			 
			 cout<<"Do You want to continue........? "<<"\n";
			 cin>>num1;
		 }while(num1!=0);
	return 0;
}
