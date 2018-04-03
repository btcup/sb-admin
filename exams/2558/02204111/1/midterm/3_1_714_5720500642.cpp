#include<iostream>
#include<cmath>
using namespace std;
int main()
{
     char x,Y,N;
    int w,z;

    cout<<"Are you member(Y or N): ";
    cin>>x;
     if(x=Y){{
    cout<<"How old are you?: ";
    cin>>w;
    cout<<"Normal price: ";
    cin>>z;
    if(w<2)
    {cout<<"you have to pay "<<z%z<<endl;}
    else if(w>2&&w<12)
    cout<<"you have to pay "<<z-((z*70)/100)<<endl;
    else
    cout<<"you have to pay "<<z/2<<endl;}}
    
    if(x=N){
     cout<<"How old are you?: ";
    cin>>w;
     cout<<"Normal price: ";
    cin>>z;
    if(w<2)
    {cout<<"you have to pay "<<z%z<<endl;}
    else if (w>2&&w<11)
    {cout<<"you have to pay "<<z/2<<endl;}
    else
    {cout<<"you have to pay "<<z<<endl;}
}
 system("pause");
 return 0;   
}
