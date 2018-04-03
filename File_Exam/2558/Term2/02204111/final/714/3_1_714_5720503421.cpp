#include <iostream>
#include <string>
using namespace std;
void Count (string &s)
{
     cout<<s.find(s,0);
}
void Remove (string s)
{
     cout<<s.erase();
}
int  main()
{
     int i,c=1;
     string s,s1,s2;
     cout<<"Can I help you ? : ";
     getline(cin,s1,'\n');
     
     do
     {
        cout<<"Can I help you ? : ";
        getline(cin,s,'\n'); 
        
        for(i=0;i<s.length();i++) 
        {
               if(s[i]==' '&&s[i-1]==s.find('delete',0)&&s[i+1]==' '&&s[i]==' '&&s[i-1]==s.find('delete',0)&&s[i+1]==' ')
               c=0;              
        }               
     }while(c=0);
     cout<<"What word : ";
     getline(cin,s2,'\n');
     
     
     
 system("pause");
 return 0;    
}
