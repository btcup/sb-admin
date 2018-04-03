
#include <iostream>
using namespace std;
int main() {
    int U, V;
    float F;
    cout<<"Please input usage : ";
    cin>>U;
    cout<<"Please input voltage : ";
    cin>>V;
    F=U*0.4638;
    cout<<endl;
    if(V>=22&&V<=33&&V>=0){
      cout<<"Electricity cost : "<<U*2.4649<<endl;
      cout<<"service : 228.17"<<endl;
      cout<<"Ft : "<<F<<endl;
      cout<<"Vat 7% : "<<(((U*2.4649)+228.17+F)*0.07)<<endl;
      cout<<endl;
      cout<<"Total cost : "<<(U*2.4649)+228.17+F+(((U*2.4649)+228.17+F)*0.07)<<endl;}
      else if(V<=21&&U<=150&&V>=0){
            cout<<"Electricity cost 0-150 :"<<U*1.8047<<endl;
            cout<<"service : 40.90"<<endl;
            cout<<"Ft : "<<F<<endl;
            cout<<"Vat 7% : "<<(((U*1.8047)+40.90+F)*0.07)<<endl;
            cout<<endl;
            cout<<"Total cost : "<<(U*1.8047)+40.90+F+(((U*1.8047)+40.90+F)*0.07)<<endl; }
            else if(V<=21&&U<=400&&V>=0){
                 cout<<"Electricity cost 0-150 :"<<150*1.8047<<endl;
                 cout<<"Electricity cost 151-400 :"<<(U-150)*2.7781<<endl;
                 cout<<"service : 40.90"<<endl;
                 cout<<"Ft : "<<F<<endl;
                 cout<<"Vat 7% : "<<((150*1.8047)+((U-150)*2.7781)+40.90+F)*0.07<<endl;
                 cout<<endl;
                 cout<<"Total cost : "<<((150*1.8047)+((U-150)*2.7781)+40.90+F)+(((150*1.8047)+((U-150)*2.7781)+40.90+F)*0.07)<<endl;}
    else if(V<=21&&U>=401&&V>=0){
         cout<<"Electricity cost 0-150 :"<<150*1.8047<<endl;
         cout<<"Electricity cost 151-400 :"<<(250)*2.7781<<endl;
         cout<<"Electricity cost 401-> :"<<(U-400)*2.9780<<endl;
         cout<<"service : 40.90"<<endl;
          cout<<"Ft : "<<F<<endl;
          cout<<"Vat 7% : "<<((150*1.8047)+((250)*2.7781)+((U-400)*2.9780)+40.90+F)*0.07<<endl;
          cout<<endl;
          cout<<"Total cost : "<<((150*1.8047)+((250)*2.7781)+((U-400)*2.9780)+40.90+F)+((150*1.8047)+((250)*2.7781)+((U-400)*2.9780)+40.90+F)*0.07<<endl;}
     else if(U<=0&&V<=0){
     cout<<"Invalid Input"<<endl;
     }
       system("pause");
       return 0;
       }
