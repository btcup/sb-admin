#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,AR,B=0,L=0,K=0;
    AR=0;
    for(int i=1;i<=5;i++)
    {
    cout<<"give the numeber of passenger of day "<<i<<" : ";
    cin>>a>>b>>c>>d;
    AR=AR+a;
    B=b+B;
    L=c+L;
    K=K+d;
    }
    cout<<"total aair asia is"<<AR<<endl;
    cout<<"the arerage of all day is"<<(AR+B+L+K)/5<<endl;
    if(AR>B&&AR>L&&AR>K) cout<<"the larget number is"<<AR<<endl;
    else if(B>AR&&B>L&&B>K)cout<<"the larget number is"<<B<<endl;
    else if(L>B&&L>AR&&L>K)cout<<"the larget number is"<<L<<endl;
    else if(K>AR&&K>L&&L>B)cout<<"the larget number is"<<K<<endl;
    

 

system("pause");
return 0;
}

