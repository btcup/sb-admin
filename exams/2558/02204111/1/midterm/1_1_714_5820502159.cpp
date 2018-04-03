#include <iostream>
using namespace std;
int main()
{
    int h,i;
    double j,k;
    cout<<"Please input usage :";
    cin>>h;
    cout<<"Please input voltage :";
    cin>>i;   
    if(i>=22&&i<=33)
    {   
    k=228.17;
    j=((h*2.4649)+k+(0.4638*h))+(j*7/100);
    cout<<"Electricity Cost:22-33 :"<<j<<endl;
    cout<<"Service :"<<k<<endl;
    cout<<"Ft :"<<0.4638*h<<endl;
    cout<<"Vat 7% :"<<(j*7)/100<<endl;
    }
    else
    {
         k=40.90;
        if(h<=150){
        j=((h*1.8047)+k+(0.4638*h))+(j*7/100);
        cout<<"Electricity Cost:0-150 :"<<j<<endl;
        cout<<"Service :"<<k<<endl;
        cout<<"Ft :"<<0.4638*i<<endl;
        cout<<"Vat 7% :"<<(j*7)/100<<endl;
        }
        else if(h<=400){
        j=((h*2.7781)+k+(0.4638*h))+(j*7/100);
        cout<<"Electricity Cost:151-400 :"<<j<<endl;
        cout<<"Service :"<<k<<endl;
        cout<<"Ft :"<<0.4638*i<<endl;
        cout<<"Vat 7% :"<<(j*7)/100<<endl;
        }
        else
        {
        j=((h*2.9780)+k+(0.4638*h))+(i*7/100);
        cout<<"Electricity Cost:401-"<<h<<" :"<<j<<endl;
        cout<<"Service :"<<k<<endl;
        cout<<"Ft :"<<0.4638*i<<endl;
        cout<<"Vat 7% :"<<(j*7)/100<<endl;
        }
        
     }

    
    system("pause");
    return 0;
}
