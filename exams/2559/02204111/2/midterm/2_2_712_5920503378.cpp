//5920503378 Chanthapong yamyim
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n,r=1,i=0,target=0;
    double u;
    cout<<"Enter an integer: ";
    cin>>n;
    while(n/r>0)
    {
             i=i+1;
             r=r*10;
            
             target=target+pow(u,i);
    } 
    cout<<"Number of digit is "<<i<<endl;
    u=n%r;
             target=target+pow(u,i);
    if(n==target)
    cout<<n<<" is a target number."<<endl;
    if(n!=target)
    cout<<n<<" is not a target number."<<endl;
system ("pause");
return 0;
}

