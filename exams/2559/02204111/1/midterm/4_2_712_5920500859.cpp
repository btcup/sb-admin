// 5920500859  Sirichai  Sritawatin
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int sum,z,n,a,x;
    sum=0;
    z=999999;
    
   
    for(a=1;a<=4;a=a+1){
    cout<<"Enter "<<a<<" number : ";    
    cin>>n;   
    if(n>sum){
    sum=n;}
    else if (n<z){
    x=n;}
    
    }
    
    
              
    cout<<"number is Maximum "<<sum<<endl;
    cout<<"number is Minimum "<<x<<endl;
    cout<<"The difference between Min. and Max. is "<<sum-x<<endl;
    
    
    
    
    
    
    
    
    
    
    
    system("pause");
    return 0;
}
