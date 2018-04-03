#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int x,y,i;
    cout<<"Please input usage : ";
    cin>>x;
    cout<<"Please input voltage : ";
    cin>>y;
    if(y>=22&&y<=33)
    if(x>=0&&x<=150)
    {cout<<"Electricity Cost : "<<x*2.4649<<endl;
    cout<<"Service : 228.17"<<endl;
    cout<<"Ft : "<<0.4638*x<<endl;
    cout<<"Vat 7 % : "<<x*2.4649*7/100+228.17*7/100+0.4638*x*7/100<<endl;
    cout<<"Total cost : "<<x*2.4649*7/100+228.17*7/100+0.4638*x*7/100+x*2.4649+228.17+0.4638*x<<" Baht"<<endl;}
    if(y>=0&&y<=21)
    if(x>=0&&x<=150)
    {cout<<"Electricity Cost : "<<x*1.8047<<endl;
    cout<<"Service : 40.90"<<endl;
    cout<<"Ft : "<<0.4638*x<<endl;
    cout<<"Vat 7 % : "<<x*1.8047*7/100+40.90*7/100+0.4638*x*7/100<<endl;
    cout<<"Total cost : "<<x*1.8047*7/100+40.90*7/100+0.4638*x*7/100+x*1.8047+40.90+0.4638*x<<" Baht"<<endl;}
    
    system ("pause");
    return 0;
}
    
