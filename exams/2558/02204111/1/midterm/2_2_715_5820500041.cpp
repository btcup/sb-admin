#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char a,b,c,k;
    float H,W,D,G,A,B,U,K,w,u,q,r;
    cout<<"Welcome to the fantastic tiles!!:";
    cout<<"Please enter room size in meter (H*W*D):";
    cin>>H>>W>>D;
    cout<<"Please select floor tile :";
    cin>>K;
    if(k=='a')
    {
            cout<<"Number of floor tilees"<<55<<"*"<<G<<"="<<A<<"bath"<<endl;
            cin>>G;
            cout<<"Number of wall tilees"<<17<<"*"<<U<<"="<<B<<"bath"<<endl;
            cin>>U;
    }
    cout<<"total price"<<A<<"+"<<B<<"="<<A+B<<endl;
    if(k=='b')
    {
            cout<<"Number of floor tilees"<<80<<"*"<<w<<"="<<A<<"bath"<<endl;
            cin>>w;
            cout<<"Number of wall tilees"<<17<<"*"<<u<<"="<<B<<"bath"<<endl;
            cin>>u;
    }
    cout<<"total price"<<w<<"+"<<u<<"="<<A+B<<endl;
    if(k=='c')
    {
            cout<<"Number of floor tilees"<<90<<"*"<<q<<"="<<A<<"bath"<<endl;
            cin>>q;
            cout<<"Number of wall tilees"<<50<<"*"<<U<<"="<<r<<"bath"<<endl;
            cin>>r;
    }
    cout<<"total price"<<A<<"+"<<B<<"="<<A+B<<endl;
    return 0;
    system("pause");
}
