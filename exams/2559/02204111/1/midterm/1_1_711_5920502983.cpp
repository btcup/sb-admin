#include <iostream>
using namespace std;
int main()
{
    float x,y,z,i;
    cout<<" Enter n, a and d:";
    cin>>x>>y>>z;
    i=0;
    while (i>=0)
    {
                 if (x>0)
                 {
                 cout<<" Enter n, a and d:";              
                 cout<<" The arithmetic progression of n="<<x<<",a="<<y<<",d="<<z<<":"<<(y+i*z)<<endl;
                 i=i+1;
                 if (i==x) break;
                 cout<<"The summation:"<<(y+i*z)*x<<endl;
                 
                 }
                 else 
                 cout<<"n cannot be both a negative integer and a zero"<<endl;
                 
                               
    }
    system ("pause");
    return 0;
}

                 
