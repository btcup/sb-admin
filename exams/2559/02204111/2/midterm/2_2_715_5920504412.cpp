//Eaktawat phupanaind//
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,sum,r,s,p,w,m,h=2,i=3,j=4,k=5,z=10,x=100,c=1000,v=10000,b=100000,d;
    cout<<"Enter n";
    cin>>n;
    m=(n%100000-(n%10000-n%100-n%100-n%10))/10000;
    p=(n%10000-(n%100-n%100-n%10))/1000;
    r=(n%1000-(n%100-n%10))/100;
    s=(n%100-n%10)/10;
    w=n%10;
    if(999<n<10000)
    {
    cout<<"Number of digit is = 4";
    d=(pow(p,4))+(pow(r,4))+(pow(s,4))+(pow(w,4));
    if(n==d)
    cout<<n<<"is target number";
    else if(n!=pow(p,4)+pow(r,4)+pow(s,4)+pow(w,4))
    cout<<n<<"is not target number";
     }
     else if(99<n<100)
    {
    cout<<"Number of digit is = 3";
    if(n==pow(r,3)+pow(s,3)+pow(w,3))
    cout<<n<<"is target number";
    else if(n!=pow(r,3)+pow(s,3)+pow(w,3))
    cout<<n<<"is not target number";
     }
else if(0<n<10)
     {
    cout<<"Number of digit is = 2";
    if(n==pow(s,2)+pow(w,2))
    cout<<n<<"is target number";
    else if(n!=pow(s,2)+pow(w,2))
    cout<<n<<"is not target number";
     }
else if (9999<n<100000)
     {
    cout<<"Number of digit is = 5";
     if(n==pow(m,5)+pow(p,5)+pow(r,5)+pow(s,5)+pow(w,5))
    cout<<n<<"is target number";
    else if(n!=pow(m,5)+pow(p,5)+pow(r,5)+pow(s,5)+pow(w,5))
    cout<<n<<"is not target number";
    }
    
    
    system("pause");
    return 0;
  
}
