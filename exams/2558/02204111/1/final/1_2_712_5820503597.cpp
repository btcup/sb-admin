#include<iostream>
using namespace std;
string changeSentences(string a)
{
       
       int i;
       char x;
    for(i=0;i<a.size();i=i+1)
   {
      if(a[i]=='.'||a[i]=='?')
      {
     
      }                     
   }    
   return a;    
}
int main()
{
    string a;
    char b;
    
    
   cout<<"Input sentences : ";
   getline(cin,a,'\n');
   
   changeSentences(a);
   cout<<"Output sentences : "<<endl<<a;
  
   system("pause");
   return 0;
    
}
