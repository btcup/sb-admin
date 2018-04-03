#include <iostream> //5920500263 kiattisak srimuang
#include <cmath>
using namespace std;
int main()
{
    int x,a,b,c,d,e ;
    float q,w,r;
    cout<<"Enter an intteger: ";
    cin>>x;
    a=(x%10);
    b=((x%100)-a)/10;
    c=((x%1000)-b)/100;
    d=((x%10000)-c)/1000;
    e=((x%100000)-d)/10000;
    q=pow(a,3.0)+pow(b,3.0)+pow(c,3.0);
    w=pow(a,4.0)+pow(b,4.0)+pow(c,4.0)+pow(d,4.0);
    r=pow(a,5.0)+pow(b,5.0)+pow(c,5.0)+pow(d,5.0)+pow(e,5.0);
    if(x>100&&x<999)
    {
         cout<<"Number of digit is 3\n";
         if(x==q)
         cout<<x<<" is a targer number\n";
         else
         cout<<x<<" is not targer number\n";
    }
    else if (x>1000&&x<9999)
    {
         cout<<"Number of digit is 4\n";
         if(x==w)
         cout<<x<<" is a targer number\n";
         else
         cout<<x<<" is not targer number\n";
                    }
    else if (x>10000&&x<99999)
    {
         cout<<"Number of digit is 5\n";
         if(x==e)
         cout<<x<<" is a targer number.\n";
         else
         cout<<x<<" is not targer number.\n";
    }
    system("pause");
    return 0;
}
