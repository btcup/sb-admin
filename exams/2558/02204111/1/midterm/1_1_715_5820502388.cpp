#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int u,v;
    cout<<"Please input usage : ";
    cin>>u;
    cout<<"Please input voltage : ";
    cin>>v;
    cout<<" "<<endl;
    if(u<0){
         cout<<"Invalid Input !!!"<<endl;
         }
    else if((v<22)&&(u<=150)){
             cout<<"Electricity Cost 0-150 : 1.8047"<<endl;
             cout<<"Sevice : 40.90"<<endl;
             cout<<"Ft : "<<u*0.4638<<endl;
             cout<<"Vat 7 % : "<<(((u*1.8047)+40.90+(0.4638*u))*7)/100<<endl;
             cout<<" "<<endl;
             cout<<"Total cost : "<<(u*1.8047)+40.90+(0.4638*u)+(((u*1.8047)+40.90+(0.4638*u))*7)/100<<endl;
             }
    else if((v<22)&&(u>150)&&(u<=400)){
         cout<<"Electricity Cost 0-150 : 1.8047"<<endl;
         cout<<"Electricity Cost 151-400 : 2.7781"<<endl;
         cout<<"Sevice : 40.90"<<endl;
         cout<<"Ft : "<<u*0.4638<<endl;
         cout<<"Vat 7 % : "<<(((u*2.7781)+40.90+(0.4638*u))*7)/100<<endl;
         cout<<" "<<endl;
         cout<<"Total cost : "<<(u*2.7781)+40.90+(0.4638*u)+(((u*2.7781)+40.90+(0.4638*u))*7)/100<<endl;
         }
    else if((v<22)&&(u>=401)){
         cout<<"Electricity Cost 0-150 : 1.8047"<<endl;
         cout<<"Electricity Cost 151-400 : 2.7781"<<endl;
         cout<<"Electricity Cost 401 -> : 2.9780"<<endl;
         cout<<"Sevice : 40.90"<<endl;
         cout<<"Ft : "<<u*0.4638<<endl;
         cout<<"Vat 7 % : "<<(((u*2.9780)+40.90+(0.4638*u))*7)/100<<endl;
         cout<<" "<<endl;
         cout<<"Total cost : "<<(u*2.9780)+40.90+(0.4638*u)+(((u*2.9780)+40.90+(0.4638*u))*7)/100<<endl;
         }
    else if((v>=22)&&(v<=33)){
         cout<<"Electricity Cost : 2.4649"<<endl;
         cout<<"Sevice : 228.17"<<endl;
         cout<<"Ft : "<<u*0.4638<<endl;
         cout<<"Vat 7 % : "<<(((u*2.4649)+228.17+(0.4638*u))*7)/100<<endl;
         cout<<" "<<endl;
         cout<<"Total cost : "<<(u*2.9780)+40.90+(0.4638*u)+(((u*2.9780)+40.90+(0.4638*u))*7)/100<<endl;
         }
    system("pause");
    return 0;
}
