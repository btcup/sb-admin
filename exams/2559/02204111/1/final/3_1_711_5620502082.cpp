//5620502082 Phiphat khachenton
#include <iostream>
using namespace std;
int main()
{
    int i,a;
    string x,y;
    cout<<"Enter text:";
    cin>>x;
    cout<<"Enter Keyword:";
    cin>>y;
    a=x.find(y,0);
    if( a==true)
    cout<<"'"<<y<<"'"<<"is in above text.";  
    else 
    cout<<"'"<<y<<"'"<<"is in not above text.";  
    
    

system ("pause");
return 0;
} 
