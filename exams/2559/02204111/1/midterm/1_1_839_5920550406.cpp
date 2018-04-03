// 5920550406 Sirichai Phattharaketanan
#include<iostream>
using namespace std;
int main()
{
    float n,a,d;
    cout<<"Enter n,a and d:"<<endl;
    cin>>n>>a>>d;
    
    do
    {
    if(n<=0||a==0||d==0)
    cout<<"n cannot be both a negative integer and a zero"<<endl;
    cout<<"Enter n,a and d:"<<endl;
    cin>>n>>a>>d;
    else if (n!=0&&a!=0&&d!=0)
    cout<<"The arithmetic progression of "<<"n="<<n<<","<<"a="<<a<<","<<"d="<<d<<endl; 
    }while(n<=0||a==0||d==0);
system ("pause");
return 0;    
}
