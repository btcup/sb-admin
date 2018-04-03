// 5920503009 Jaiwijit Jutaree
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int a,b,c,d ;
    cout<<"Enter 1st number : " ;
    cin>>a;
    cout<<"Enter 2nd number : " ;
    cin>>b;
    cout<<"Enter 3rt number : " ;
    cin>>c;
    cout<<"Enter 4th number : " ;
    cin>>d;
    if(a>b>c>d){
               cout<<" 4th number is minimum "<<endl;
               cout<<" 1st number is maximum "<<endl;
               cout<<" The difference between Min. and Max. is "<<a-d<<endl; }
    else if(a>b>d>c){          
               cout<<" 3rt number is minimum "<<endl;
               cout<<" 1st number is maximum "<<endl;
               cout<<" The difference between Min. and Max. is "<<a-c<<endl; }
    else if(b>a>c>d){
                     cout<<" 4th number is minimum "<<endl;
                     cout<<" 2nd number is maximum "<<endl;
                     cout<<" The difference between Min. and Max. is "<<b-d<<endl; }
    else if(b>a>d>c){
                     cout<<" 3rt number is minimum "<<endl;
                     cout<<" 2nd number is maximum "<<endl;
                     cout<<" The difference between Min. and Max. is "<<b-c<<endl; }
    else if(c>d>a>b){ 
                     cout<<" 2nd number is minimum "<<endl;
                     cout<<" 3rt number is maximum "<<endl;
                     cout<<" The difference between Min. and Max. is "<<c-b<<endl; }
    else if(c>d>b>a){
                     cout<<" 1st number is minimum "<<endl;
                     cout<<" 3rt number is maximum "<<endl;
                     cout<<" The difference between Min. and Max. is "<<c-a<<endl; }
    else if(d>c>a>b){
                     cout<<" 2nd number is minimum "<<endl;
                     cout<<" 4th number is maximum "<<endl;
                     cout<<" The difference between Min. and Max. is "<<d-b<<endl; }
    else {
                     cout<<" 1st number is minimum "<<endl;
                     cout<<" 4th number is maximum "<<endl;
                     cout<<" The difference between Min. and Max. is "<<d-a<<endl; }
    system ("pause");
    return 0 ;
}
    
    
    
    
    
    
