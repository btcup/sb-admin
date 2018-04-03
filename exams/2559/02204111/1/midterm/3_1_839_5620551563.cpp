//5620551563 sophon uthairungratsamee
#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,d,f,g,h,total;
    cout<<"input value : ";
    cin>>a;
    cout<<"input value : ";
    cin>>b;
    cout<<"input value : ";
    cin>>c;
    cout<<"input value : ";
    cin>>d;
    total=a*100+b*100+c*100+d*100;
    if(a>0||b>0||c>0||d>0)
    {
             cout<<"Total is "<<total<<endl;                    
    }
    else 
    cout<<"Invalid Input !! Try Again"<<endl;
    system ("pause");
    return 0;
}
    
    
