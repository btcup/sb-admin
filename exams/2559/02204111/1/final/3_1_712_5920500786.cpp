//5920500786 Panjapon ponkaset
#include <iostream>
using namespace std;
void mySearch(string str1,string str2)
	{     string x1;
	    str1==x1;
		int i,x,y=0,z=0;
		y=str2.find('*',0);
		//x=str1.size();
		z=str2.find(x1,0);
		do{
		
	 if (y != -1 )
	     	{cout<<"Incorrect Keyword!"<<endl;break;}
	     	
	 else 
	    {   if (z!=-1)
	    
	    	cout<<" '"<<str2<<"' "<<"is in above text."<<endl;break;
	    }
		
		}while(1);//cout<<y<<endl;
	 }
	 
	int main()
	{
		string str1,str2;
		cout<<" Enter text: ";
		getline(cin,str1,'\n');
		cout<<" Enter keyword: ";
		getline(cin,str2,'\n');
			mySearch( str1,str2);
		
	return 0;
	}
