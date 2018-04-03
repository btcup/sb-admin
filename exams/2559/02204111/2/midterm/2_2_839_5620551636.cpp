//5620551636 Kritsana Yeamkesorn
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int N,a,b,c;
    
    cout<<"Enter an integer:";
    cin>>a;
    
    if(a<10&&a>0){
             cout<<"Number of digit is :"<<1<<endl;
             }
    if(a<100&&a>10){
             cout<<"Number of digit is :"<<2<<endl;
             }
    if(a<1000&&a>100){
             cout<<"Number of digit is :"<<3<<endl;
             }         
    if(a<10000&&a>1000){
             cout<<"Number of digit is :"<<4<<endl;
             }
   if(a<100000&&a>10000){
             cout<<"Number of digit is :"<<5<<endl;
             } 
    if(a<1000000&&a>100000){
             cout<<"Number of digit is :"<<6<<endl;
             }
    if(a<10000000&&a>1000000){
             cout<<"Number of digit is :"<<7<<endl;
             }
             
             
    
    
    
    system ("pause");
    return 0;
    
    }
