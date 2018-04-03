#include <iostream>
using namespace std;
int main()
{
    float n,a,d,;
    cout<<"Enter n, a and d :";
    cin>>n>>a>>d;
    cout<<"The arithmetic progression of n ="<<n<<"\ta="<<a<<"\td="<<d<<"\t:"<<endl;
          
    if(n<=0)
    {
            cout<<"n cannot be both a negtive integer and a zero"<<endl;
    }
    if(a==0)
    {
            cout<<"a cannot be zeros"<<endl;
    }
    if(d==0)
    {
            cout<<"d cannot be zeros"<<endl;
    }
    
    system ("pause");
    return 0;
}
    
