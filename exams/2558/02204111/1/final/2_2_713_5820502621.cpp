#include <iostream>
#include <string>
using namespace std;
string countThe(string s)
{
   
   int i,k,l,u,m;
  
   if(s=="The ")
   
    
     {m=1;}
   
   
   else if(s=="THE ")
   {l=1;}
    else if(s=="the ")
   {u=1;}
    m=k+l+u;
 
   
   
   
   cout<<"There are "<<m<<" word of ' the '";

}






int main()
{
      
  string s;
  cout<<"Enter your sentence :"  ;
  cin>>s;
  countThe(s);
  
 system("pause");
 return 0;   
    
}
