#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    char c;
         cout<<"Are you number:";
         cin>>c; 
        cout<<"How old are you:";
        cin>>a;
        cout<<"Normal price:";
        cin>>b;
        
        cout<<"you have to pay"<<((a/b)*100)<<endl;
    
    
    

system("pause");
return 0;
}
