//5920501634 Miss.Patcharamai Panwanichaiyakij
#include<iostream>
using namespace std;

string functionmySearch(string a,string b){
       int c;
       string r,e;
       
      c=a.find(b,0);
      if(c!=string::npos){
      r="'"+b+"'"+"is in above text";
      return r;
      }
      else
         
      cout<<"'"+b+"'"+"is not in above text";
      
}
int main()
{
    string q,s,p,r,t;
    cout<<"Enter text:";
    getline(cin,s,'\n');
    cout<<"Enter keyword:";
    getline(cin,p,'\n');
    
    if(p[0]=='*'){
    cout<<"In correct keyword!"<<endl;
}
if(p[0]!='*'){
    t=functionmySearch(s,p);
    cout<<t<<endl;
}
   system("pause");
   return 0;
}
    
    
