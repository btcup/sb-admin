#include <iostream>
using namespace std;
int main()
{
	int i,sum=0;
	string mySearch,keyword,s,k="",m;
	cout<<"Enter text:";
	getline(cin,mySearch,'\n');
	cout<<"Enter keyword:";
	getline(cin,keyword,'\n');  
	    if(keyword.find("*",i)!=-1)
		{
	       	for(i=0;i<mySearch.length();i++)
	       	{
	       	   if(keyword.substr(0,1)=="*")
			   {
			   	  cout<<"Incorrect keyword!"<<endl;
			   	  break;
	       	   }
	       	   else
	       	   {
	       	   	  if(keyword.substr(i,1)=="*")
	       	   	  {
	       	         s=keyword.substr(i,1);
	       	         k=k+s;
	       	         sum=sum+1;
	       	         
	       	      }
	       	      else
	       	      {
	       	      	 m=keyword.substr(i,1);
	       	      	 if(mySearch.find(m,i)!=-1)
	       	         {
	       	   	        k=k+m;
					    sum=sum+1;   
	       	         }
	       	      }
	           }
	       	}
	       	if(sum==keyword.length())
	       	{
	       	   cout<<"'"<<keyword<<"' is in above text."<<endl;
			}
	    }
	    else
		{
	        if(mySearch.find(keyword,0)!=-1)
	        {
		        cout<<"'"<<keyword<<"' is in above text."<<endl;
	        }
	        else
	        {
		        cout<<"'"<<keyword<<"' is not in above text."<<endl;
            }
        }
	system ("pause");
	return 0;
}
