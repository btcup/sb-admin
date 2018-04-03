//5920502789  Narumon  Chongklang

#include<iostream>
using namespace std;

char encryption(string s)
{
   int i,n;
   char t,u;
   
    for(i=s.length();i>=0;i--)
    {                           
        t=s[i];
        cout<<t;
    }
    u=t;
    
    return u;
}


int main()
{
    string s,t,u;
    int i,n,a,b;
    
    cout<<"Enter text : ";
    getline(cin,s,'\n');
    
   // b=0;
  //  a=s.find(" ",b);
  //  for(b=0;b<=s.length();b++)
   // {
   // cout<<a;
//}
    
    cout<<"Encrypted text:"<<u;
    u=encryption(s);
     
    cout<<endl;
    
   system("pause");
  return 0;
}
    
    
