//5920551682 metas chinhiran
#include<iostream>
using namespace std;
int main(){
    int a,b=9999,c=0,d;
    do{cout<<"Enter N: ";
               cin>>a;
                if(a>0){
                cout<<"The greatest factor of "<<a<<" is ";
                while(1){if(a%b==0&&b!=a){
                         if(b%3==0){
                         d=b/3;
                         break;}
                         else if(b%2==0){
                          d=b/2;
                         break;}
                         else
                         d=b;
                         break;}
                         else
                         b--;}           
                         if(d==1)
                         cout<<a<<" --> prime number\n";
                         else
                         cout<<d<<"\n";
                         }
                         
                         }while(a<=0);
                         
    system("pause");
    return 0;
    }
