#include<iostream>
using namespace std;
int main ()
{
    /*5920501588 Phanutchaporn Ong-ard*/
    int n,sum,x=0,i,j=0,k=0,p=0;
    
    cout<<"input value: ";
    cin>>n;
    sum=0;
    
    for(x=0;n>=0&&n<10;)
    {x=sum+n;
    cout<<"input value: ";
    cin>>n;
    sum=x*10;}
    cout<<"Your money is "<<x<<" = ";
    
    for (i=10;x>0&&j<=100;i=i*10)
    {k=p;
    j=x%i-k;
    p=j+k;
    cout<<j;
    if(j>=0)
    cout<<" + ";}
    cout<<endl;
    system("pause");
    return 0;
}
