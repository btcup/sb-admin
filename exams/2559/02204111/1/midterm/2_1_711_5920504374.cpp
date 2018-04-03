//5920504374 jakkrit wannaphongsai
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n,a,r,i,x;
    cout<<"Enter n,a and r:";
    cin>>n>>a>>r;
    i=0;
    x=0;
    while(n<=0||a==0||r==0){
         if(n<=0&&a!=0&&r!=0){
             cout<<"n cannot be both a negative integer and a zero"<<endl;}
         if(n<=0&&a==0&&r==0){
             cout<<"n cannot be both a negative integer and a zero"<<endl;
             cout<<"a and r cannot be zero"<<endl;}
         if(n>0&&a==0&&r!=0){
             cout<<"a cannot be a zero"<<endl;}
         if(n>0&&a!=0&&r==0){
             cout<<"r cannot be r zero"<<endl;}
         cout<<"Enter n,a and r:";
         cin>>n>>a>>r;}                    
    while(n>0&&i<n&&a!=0&&r!=0){ 
         cout<<a*pow(r,i)<<endl;
         x=x+a*pow(r,i);
         i=i+1;
     }
     cout<<"the summation x:"<<x<<endl;
     system("pause");
     return 0;
}
    
    
