#include<iostream>
using namespace std;
int main()
{
    double a,b;
    cout<<"Enter electricity cost per unit (bahts):  ";
    cin>>a;
    while(a<0);
    {
    cout<<"Enter electricity cost per unit (bahts):  ";
    cin>>a;
    }
    while(a>0);
    {
    cout<<"Enter last unit:  ";
    cout<<"Enter current unit:  ";
    cout<<"Units used:  ";
    cout<<"Electricity charge (bahts)=  ";
    cin>>a;
     
    cout<<"Enter last unit:  ";
    cout<<"Enter current unit:  ";
    cout<<"Invalid current unit!"<<endl;
    
    cout<<"Enter last unit:  ";
    cout<<"Enter current unit:  ";
    cout<<"Units used:  ";
    cout<<"Electricity charge (bahts)=  ";
    
    cout<<"Enter last unit:  ";
    cout<<"-- End of Calculation-- ";
}  
system("pause");
return 0;
}
    
    
