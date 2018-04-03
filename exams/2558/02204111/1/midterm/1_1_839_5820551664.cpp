#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,f,g;
    cout<<"Please in put usage:";
    cin>>a;
    cout<<"Please input voltage:";
    cin>>b;
    
    if(0<=a<=150.0){
    cout<<"Electricity Cost 0-150 "<<a*1.8047<<endl;}
    else if(151.0<=a<=400.0){
    cout<<"Electricity Cost 151-400 "<<a*2.7781<<endl;}
    else if(a>=401.0){
    cout<<"Electricity Cost 401->" <<a*2.9780<<endl;}
    
    if(b<22.0){
    cout<<"Service"<<40.90<<endl;}
    else if (22.0<=b<=33.0){
    cout<<"Service"<<228.17<<endl;}
    cout<<"Ft: "<<0.4638*a<<endl;
    cout<<"Vat7% "<<endl;
    
    
    cout<<"Total cost :";
    
    system("pause");
    return 0;
}
