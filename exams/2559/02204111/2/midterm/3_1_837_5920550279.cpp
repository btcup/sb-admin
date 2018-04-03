//5920550279 Sukanda Sisun
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x,y,t,a,c,b;
    cout<<"Arrival tame: ";
    cin>>x;
    cout<<"Leave time: ";
    cin>>y;
    t=(int)y-(int)x;
    c=(y-(int)y)-(x-(int)x);
    a=0.60-c;
    b=a*10;
    cout<<t<<" hours and "<<b;
    system("pause");
    return 0;
}
