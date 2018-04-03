//5920501740 sirinapa kanenok

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,x,y;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if(n>0)
    {n=n/10;
    cout<<"Number of digit is "<<ceil(n)<<endl;
    cout<<"Factor of " <<n<<"are:";
    for(x=1;x%n==0;x++)
    {
     for(y=n;y%n==0;y--)
    {cout<<x<<"*"<<y<<" = ";
                        } }
                       
                
}
else 
cout<<"Invalid number !!";
system("pause");
return 0;
}
