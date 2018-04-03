#include <iostream>
using namespace std;
int main()
{
    char x,Y,N;
    int y,n;
    cout<<"Are you member(Y or N) : ";
    cin>>x;
    if(x=Y){ 
    cout<<"How old are you ?:";
    cin>>y;
}
    if(y<2)
    cout<<"Normal price :";
    cin>>n;
    n=0;
    cout<<"You have to pay :"<<n<<endl;
    if(2<=y<=12)
    cout<<"Normal price :";
    cin>>n;
    n= (n-(70/100)*n);
    cout<<"You have to pay :"<<n<<endl;
    
    
    
    
    
    
    
    
system ("pause");
return 0;
}
