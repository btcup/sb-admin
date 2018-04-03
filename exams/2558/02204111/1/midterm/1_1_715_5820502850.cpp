#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c,d,e,f;
    cout<<"Please input usage : ";
    cin>>a;
    if (a<0)
    cout<<"Invalid Input !!!"<<endl;
    cout<<"Please input voltage : ";
    cin>>b;
    if(b<34&&b>21&&a>0){
    c=228.17;
                cout<<"Electricity Cost : "<<a*2.4649<<endl;
                cout<<"Service : "<<c<<endl;
                cout<<"Ft : "<<a*46.38/100<<endl;
                cout<<"Vat 7 % : "<<(((a*2.4649)+c+(a*46.38/100))*7)/100<<endl;
                cout<<"Total cost : "<<ceil(a*2.4649)+c+(a*46.38/100)+(((a*2.4649)+c+(a*46.38/100))*7)/100<<endl;
                }
    else if(b<22&&a>0){
    c=40.90;
         if(a<=150){
                    cout<<"Electricity Cost 0-150 : "<<a*1.8047<<endl;
                    cout<<"Service : "<<c<<endl;
                    cout<<"Ft : "<<a*46.38/100<<endl;
                    cout<<"Vat 7 % : "<<(((a*1.8047)+c+(a*46.38/100))*7)/100<<endl;
                    cout<<"Total cost : "<<ceil(a*1.8047)+c+(a*46.38/100)+(((a*1.8047)+c+(a*46.38/100))*7)/100<<endl;
                    }
         else if(a<=400){
                         cout<<"Electricity Cost 0-150 : "<<150*1.8047<<endl;
                         d=a-150;
                         cout<<"Electricity Cost 150-400 : "<<d*2.7781<<endl;
                         e=(150*1.8047)+(d*2.7781);
                         cout<<"Service : "<<c<<endl;
                         cout<<"Ft : "<<a*46.38/100<<endl;
                         cout<<"Vat 7 % : "<<((e+c+(e*46.38/100))*7)/100<<endl;
                         cout<<"Total cost : ";
                         }
         else if(a>400){
                        cout<<"Electricity Cost 0-150 : "<<150*1.8047<<endl;
                        cout<<"Electricity Cost 150-400 : "<<250*2.7781<<endl;
                        d=a-400;
                        cout<<"Electricity Cost 401 -> : "<<d*2.9780<<endl;
                        e=(150*1.8047)+(d*2.9780)+(250*2.7781);
                        cout<<"Service : "<<c<<endl;
                        cout<<"Ft : "<<a*46.38/100<<endl;
                        cout<<"Vat 7 % : "<<((e+c+(e*46.38/100))*7)/100<<endl;
                        cout<<"Total cost : ";
                        }
                        }
  
    system ("pause");
    return 0;
}

    
    
    
