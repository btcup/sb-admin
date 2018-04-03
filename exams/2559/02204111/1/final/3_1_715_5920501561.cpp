#include<iostream>
#include <string>
using namespace std;
void mySearch (string s,string n)
{s.find(n,0);
bool x=1;

 //if(s[s.find(n,0)+n.length()]!=' '&&(s[s.find(n,0)+n.length()]!='.')) cout<<"' "<<n<<" ' is not above the text"<<endl;
 {int j=s.find(n,0);
 for(int i=0;i<n.length();i++)
      {if (n[i]==s[j]){ x=1;j++;continue;}
       else if (n[i]!='*') {x=1;j++;continue;}
       else {x=0;break;}}
if(x==1)cout<<"'"<<n<<"' is  above the text."<<endl;  
else cout<<"'"<<n<<"' is not above the text."<<endl;
 
  }}


int main (){
    string s,n;
    cout<<"Enter text : ";
    getline (cin,s,'\n');
    cout<<"Enter keyword : ";
    getline (cin,n,'\n');
    if (n[0]=='*')cout <<"Incorrect keywords"<<endl;
    else mySearch (s,n);
    
    system("pause");
    return 0;
    
    }
