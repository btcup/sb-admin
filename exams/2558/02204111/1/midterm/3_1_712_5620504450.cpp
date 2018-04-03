#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y,a;
    char name;
    x='Y',y='N';  
    
    cout<<"Are you member (Y or N):"<<name;
    cin>>name;
    if(x='Y')
    {
    cout<<"How old are you?:";
    cin>>a;
    cout<<"Normal price :"<<a*200<<endl;
    cout<<"You have to pay 600";
    }   
    cout<<endl;
    
    system("pause");
    return 0;
}
