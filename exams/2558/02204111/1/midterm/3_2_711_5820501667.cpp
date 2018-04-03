#include<iostream>
#include<cmath>
using namespace std ;
int main (){
long long m;
int i,sum=0;
cout<<"Palease in put number :";
cin>>m;
if(m>0){
if(m%2==0)
cout<<"Summation of Even number"<<endl;
if(m%2!=0)
cout<<"Summation of Odd number"<<endl;
}
else
cout<<"!! Wrong Input"<<endl; 
    
system("pause");
return 0;
}
