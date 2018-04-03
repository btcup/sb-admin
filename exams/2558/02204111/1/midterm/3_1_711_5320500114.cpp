#include <iostream>
using namespace std;
int main()
{
    int x,y,k,q;
    char n;
    cout<<"Are you member (Y or N) :";
    cin>>n;
    cout<<"How old are you?:";
    cin>>y;
    cout<<"Normal price : ";
    cin>>k;
    if(y<2)
    q=(k-(k*(100/100)));
    cout<<"You have to pay "<<q<<endl;
    system("pause");
    return 0;
}
    
