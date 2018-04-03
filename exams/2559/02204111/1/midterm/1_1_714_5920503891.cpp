//5920503891 Oungsana Huayhongthong
#include <iostream>
using namespace std;
int main()
{
    float n,a,d;
    cin>>n>>a>>d;
    if (n%1.0>0)
       cout<<"Enter n ,a and d"<<n<<a<<d<<endl;
    else if (a>0)&&(d>0)
    cout<<"The arithmetic progression of"<<"n="<<n<<","<<"a="<<a<<","<<"d="<<endl;
    else  
         cout<<"n cannot be be both a negative interger and a zero"<<endl;
    cout<<"summation;"<<a+n+d<<endl;
    system ("pause");
    return 0;
}

    
    
    
    
