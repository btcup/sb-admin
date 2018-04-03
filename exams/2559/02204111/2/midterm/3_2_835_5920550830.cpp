#include<iostream>//5920550830
using namespace std;
int main()
{
    
    float bahts,lu,cu,uu,a,ec;
    cout<<"Enter electricity cost per unit (bahts):";
    cin>>bahts;
    for(a=0;lu>0;a)
    {
    cout<<endl;
    cout<<"Enter last unit:";
    cin>>lu;
    if(lu<0)
    {
            cout<<"--End of Calculation--"<<endl;
            cout<<"Total of Electricity charge (bahts)";
            }
    
    cout<<"Enter current unit:";
    cin>>cu;
    uu=cu-lu;
    a=uu+a;
    if(lu>cu)
    {
             cout<<"Invalid current unit!"<<endl;
             }
    if(uu<0)
    {
    cout<<"Units used ="<<uu<<endl;
    ec=uu*bahts;
    cout<<"Electricity charhe (bahts) ="<<ec<<endl;
    cout<<"Total of Eectricity charge(bahts)="<<a;
}
    
    
    
    
    
}
    
    
    
    
    

system("pause");
return 0;
}
