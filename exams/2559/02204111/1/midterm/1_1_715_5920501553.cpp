#include <iostream>
using namespace std;
int main()
{
    double n,a,d,x,y;
    cout<<"Enter n,a and d :";
    cin>>n>>a>>d;
    x=a-n;
    cout<<"n cannot be both a negetive integer and a zero"<<endl;
    if (a==0&&n==0&&d==0)
    cout<<"a and d cannot be a zero"<<endl;
    else if(x!=0)

       if (a==0)
         cout<<"a cannot be a zero"<<endl;
       else if (d==0)
         cout<<"d cannot be a zero"<<endl;
       else if(a==0&&d==0)
         cout<<"a and d cannot be a zero"<<endl;

    cout<<"the arithmetic progression of n="<<n<<", a="<<a<<", d="<<d<<":"<<endl;
    cout<<"the summation:"<<endl;

      
    
 
    
    
    system("pause");
    return 0;
}
