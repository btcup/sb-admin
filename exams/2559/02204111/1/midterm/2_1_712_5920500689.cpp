#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i; float a,r,xi,sumall;
    i=1;
    while(i>0 )
    {
              cout<<"Enter n, a and r: ";
              cin>>n>>a>>r;
              while (i>0 && i<=n && a!=0 && r!=0)
              {
                    cout<<"The geometric progression of n="<<n<<", a="<<a<<", r="<<r<<":\n";
                    i=0;
                    while(i>=0 && i<n)
                    {
                       xi=a*pow(r,i);       
                       cout<<xi<<"\t";
                       sumall=sumall+xi;
                       i++;                                                                                    
                    }
              cout<<"\n"<<"The summation:"<<sumall<<endl; i=0;
              } 
         if (n<=0)        cout<<"n cannot be both a negative integer and a zero\n";     
         if (a==0 && r==0)cout<<"a and r cannot be zero\n";
         if (a==0 && r!=0)cout<<"a cannot be zero\n";
         if (r==0 && a!=0)cout<<"r cannot be zero\n";                  
    }

    system("pause");
    return 0;
}
