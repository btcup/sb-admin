#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
    char A;
    cout<<"Enter N:";
    cin>>a;
    if(a=2){
    cin>>a;cin>>b;cin>>c;cin>>d;
    cout<<"Choose(U:Upper,L:Lower,D:diagonal):";
    cin>>a;
    if (A='U')
    cout<<a<<" "<<b<<endl<<"0 "<<d<<endl;
    else if (A='L')
    cout<<a<<" 0"<<b<<endl<<" "<<d<<endl;
    else
    cout<<a<<" 0"<<endl<<"0 "<<d<<endl;
    }
    else if(a=3){
    cin>>a;cin>>b;cin>>c;cin>>d;cin>>e;cin>>f;cin>>g;cin>>h;cin>>i;
    cout<<"Choose(U:Upper,L:Lower,D:diagonal):";
    cin>>a;
    if (A='U')
    cout<<a<<" "<<b<<" "<<c<<endl<<"0 "<<e<<" "<<f<<endl<<"0 "<<<<"0 "<<i<<endl;
    else if (A='L')
    cout<<a<<" 0"<<" 0"<<endl<<d<<" "<<e<<" 0"<<endl<<g<<<<h<<i<<endl;
    else
    cout<<a<<" 0"<<" 0"<<endl<<"0 "<<e<<" 0"<<endl<<"0 "<<<<"0 "<<i<<endl;
}
system ("pause");
return 0;    
}
