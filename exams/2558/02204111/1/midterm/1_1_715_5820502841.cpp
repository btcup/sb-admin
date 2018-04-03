#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int usage,voltage;
    float cost,service,ft=0.4638,vat,total,sum;
    cout<<"Please input usage : ";
    cin>>usage;
    if(usage<0){
     cout<<"Invalid Input !!! \n";
     system("pause");
     return 0;}
    cout<<"Please input voltage : ";
    cin>>voltage;
    cout<<endl;
    if(voltage>=22&&voltage<=33){
     service=228.17;
     cost=2.4649;
     cost*=usage;
     ft*=usage;
     cout<<"Electricity cost : "<<cost<<endl;
     cout<<"Service : "<<service<<endl;
     cout<<"Ft : "<<ft<<endl;}
     else if(voltage<22){
      if(usage>=401){
       cost=(150*1.8047)+(250*2.7781)+((usage-400)*2.9780);
       cout<<"Electricity cost 0-150 : "<<(150*1.8047)<<endl;
       cout<<"Electricity cost 151-400 : "<<(250*2.7781)<<endl;
       cout<<"Electricity cost 401 -> : "<<(usage-400)*2.9780<<endl;}
      else if(usage>=151&&usage<=400){
       cost=(150*1.8047)+((usage-150)*2.7781);
       cout<<"Electricity cost 0-150 : "<<(150*1.8047)<<endl;
       cout<<"Electricity cost 151-400 : "<<((usage-150)*2.7781)<<endl;}
      else if(usage>=0&&usage<=150){
       cost=usage*1.8047;
       cout<<"Electricity cost 0-150 : "<<usage*1.8047<<endl;}
      service=40.90;
      ft*=usage;
     cout<<"Service : "<<service<<endl;
     cout<<"Ft : "<<ft<<endl;}
     sum=cost+service+ft;
     vat=sum*0.07;
    total=cost+service+ft+vat;
    cout<<"Vat 7 % : "<<vat<<endl;
    cout<<endl;
    cout<<"Total cost : "<<ceil(total)<<" Baht\n";
    system("pause");
    return 0;
}
