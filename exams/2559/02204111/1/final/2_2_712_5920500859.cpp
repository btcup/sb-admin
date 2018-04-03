//5920500859 Sirichai Sritawatin 712
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,z,q,w;
    string a,b,c,d,e;
    cout<<"Please input your sentence : ";
    getline(cin,a,'.');
    x=a.find("the");
    if(x!=-1){  
              
    b=a.substr(x,(a.length()-x));
    b=b.replace(0,1,"T");
    
    y=a.find(" ");
    z=a.find('s');
    c=a.substr(y+1,z);
    
    q=c.find('s');
    d=c.replace(q,5,"ed");
    
    w=a.find(" ");
    e=a.substr(0,w);
    
    cout<<"passive : "<<b<<" is "<<c<<" by "<<e<<"."<<endl;}
    
    else
    cout<<"Error : Not present simple tense."<<endl;
    
    
 system("pause");
 return 0;   
}
