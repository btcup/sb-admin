#include <iostream>
using namespace std;
int main()
{
    int i,j,k,m,n,a,b,c,d,e;
    cout<<"Size of matrix:";
    cin>>i;
    if(i==1)
    {
            cout<<endl;
            cout<<"Error!! no sub matrix"<<endl;
            }
    else if(i==2)
    {
    cout<<"Value:"<<endl;
     cin>>j>>k;
     cin>>m>>n;
     
     
     cout<<"Sub-matrix :"<<endl;
     cout<<"|"<<n<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<m<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<k<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<j<<"|"<<endl;
     cout<<"-----"<<endl;
}
    else
{   
    cout<<"Value:"<<endl;
     cin>>j>>k>>m;
     cin>>n>>a>>b;
     cin>>c>>d>>e;
     
     cout<<"Sub-matrix :"<<endl;
     cout<<"|"<<a<<" "<<b<<"|"<<endl;
     cout<<"|"<<d<<" "<<e<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<n<<" "<<b<<"|"<<endl;
     cout<<"|"<<c<<" "<<e<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<n<<" "<<a<<"|"<<endl;
     cout<<"|"<<c<<" "<<d<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<k<<" "<<m<<"|"<<endl;
     cout<<"|"<<d<<" "<<e<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<j<<" "<<m<<"|"<<endl;
     cout<<"|"<<c<<" "<<e<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<j<<" "<<k<<"|"<<endl;
     cout<<"|"<<c<<" "<<d<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<k<<" "<<m<<"|"<<endl;
     cout<<"|"<<a<<" "<<b<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<j<<" "<<m<<"|"<<endl;
     cout<<"|"<<n<<" "<<b<<"|"<<endl;
     cout<<"-----"<<endl;
     cout<<"|"<<j<<" "<<k<<"|"<<endl;
     cout<<"|"<<n<<" "<<a<<"|"<<endl;
     cout<<"-----"<<endl;
}
      system ("pause");
    return 0;
}
