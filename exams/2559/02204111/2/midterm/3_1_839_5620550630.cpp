#include <iostream> //5620550630 peerayur
using namespace std;
int main()
{
    float x,y,z,a,b,c;
    cout<<"Arrival Time\t: ";
    cin>>x;
    cout<<"Leave Time\t: ";
    cin>>y;
    a=x;
    b=y;
    a=x-(int)a;
    a*=100;
    b=y-(int)b;
    b*=100;
    c=a-b;
    z=y-x;

    if (z>0&&z<4)
    {
           cout<<(int)z<<" hours and "<<(int)c<<" minutes"<<endl;
           cout<<"you have to pay 0 bath"<<endl;
    }
    else if (z>0&&z<=6)
    {
           cout<<(int)z<<" hours and "<<(int)c<<" minutes"<<endl;
           cout<<"you have to pay "<<((int)z-3)*20<<" bath"<<endl;
    }
    else if (z>0&&z<=8)
    {
           cout<<(int)z<<" hours and "<<(int)c<<" minutes"<<endl;
           cout<<"you have to pay "<<((int)z-3)*50<<" bath"<<endl;
    }
    else if (z>0&&z>8)
    {
           cout<<(int)z<<" hours and "<<c<<" minutes"<<endl;
           cout<<"you have to pay 500 bath"<<endl;
    }
    else
           cout<<"you cad't leave before arrival time"<<endl;
system("pause");
return 0;
}
    
    
    
