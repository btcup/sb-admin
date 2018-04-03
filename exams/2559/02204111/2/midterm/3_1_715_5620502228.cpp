//5620502228 Suntarika Hirunwong
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>b;
    c=floor(b-a);
    if(b-a<=4)
    {
    cout<<c<<" hours and 10 minutes "<<endl;
    cout<<"You have to pay "<<(4%3)*0<<" bath"<<endl;
    }
    else if(b-a<=5)
    {
    cout<<c<<" hours and 45 minutes"<<endl;
    cout<<"You have to pay "<<(5%3)*20<<" bath"<<endl;
    }
    else if(b-a<=8)
    {
    cout<<c<<" hours and 15 minutes"<<endl;
    cout<<"You have to pay "<<((8%3)*50)+(3*20)<<" bath"<<endl;
    }        
    else if(b-a<=10)
    {
    cout<<c<<" hours and 20 minutes"<<endl;
    cout<<"You have to pay "<<(10%3)*500<<" bath"<<endl;
    }
    else if (b<=a&&b-a<=0)
    {
    cout<<"You can't leave before arrival time"<<endl;
    }    
    system("pause");
    return 0;
}
