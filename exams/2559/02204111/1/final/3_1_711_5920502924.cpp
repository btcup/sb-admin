//5920502924 Suparat Jittithammawat
#include <iostream>
#include <string>
using namespace std;

void mySearch(string t,string k)
{
     
     if(k[0]=='*') cout<<"Incorrect keyword!\n";
     else if(t.find(k,0)!=-1)
       cout<<"'"<<k<<"' is in above text.\n";
     else if(t.find(k,0)==-1)
       cout<<"'"<<k<<"' is not in above text.\n";
       
 }
 
int main ()
{
    string t,k;
    cout<<"Enter text: ";
    getline(cin,t,'\n');
    cout<<"Enter keyword: ";
    cin>>k;
    mySearch(t,k);
    system("pause");
    return 0;
}
    
