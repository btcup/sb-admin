#include<iostream>;
#include<cmath>;
using namespace std;
int main()
{
int i=0,dn,base,x;
while(i<4)
{  
    cout<<"Enter decimal number:";
    cin>>dn;
    if(dn>=0)
    {
    cout<<"Enter base (2-9):";
    cin>>base;
    x=dn%base;
    cout<<dn<<"b10 is"<<" "<<x<<"b"<<base<<endl;
    continue;
    cin>>x;
    }
    else
    {
    break;
    }
    i++;
}
}


    
