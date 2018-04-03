//5920551445 Thanasin Wettayavigromrat
#include<iostream>
using namespace std;
void ToActive(string s)
{   
    int a,b,c,d;
    char f;
    string q,w,e;
    a=s.size();
    b=s.find(" is ",0);
    c=s.find("ed ",0);
    d=(a-c)-7;
    f=s[0]+32;
    q=s.substr(1,b-1);
    w=s.substr(b+4,c-b-4);
    e=s.substr(c+6,d);
    if(b==-1)
    cout<<"Error: Verb to be (is) not found. "<<endl;
    else{
    cout<<"active : ";
    cout<<e+" "+w+"s "+f+q+"."<<endl;}
    }
     
     
     
     
     
     
int main()
{
    
    string s;
    cout<<"Please in put tyour sentence: ";
    getline(cin,s,'\n');
    ToActive(s);
  
    
  
    
    system("pause");
    return 0;}
 
