//5920503050 Kunsinee Hirunwong
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,r;
    cout<<"Enter n, a and r :";
    cin>>n>>a>>r;
    if(n!=0&&a!=0&&r!=0){
                         cout<<"The geometric progression of" "n="<<n<<",a="<<a<<",r="<<r<<":"<<endl;
                         cout<<a*r<<endl;
                         cout<<"The summation:"<<a+r<<endl;
                         }
   else if(n==0||a==0||r==0){
        if(n<=0)
        cout<<"n cannot be both a negative integer and a zero"<<endl;

        if(a==0)
        cout<<"a cannot be a zero"<<endl;
        
        if(r==0)
        cout<<"r cannot be a zero"<<endl;
        
        else
        cout<<"Enter n, a and r :";
        cin>>n>>a>>r;   
        }
       
   else{
        cout<<"Enter n, a and r :";
        cin>>n>>a>>r;   
        cout<<"The geometric progression of" "n="<<n<<",a="<<a<<",r="<<r<<":"<<endl;
        cout<<a*r<<endl;
        cout<<"The summation:"<<a+r<<endl;
        }
    system("pause");
    return 0;
}
