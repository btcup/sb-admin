#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b;
    int c;
    cout<<"Arrival time : ";
    cin>>a;
    cout<<"Leave time : ";
    cin>>b;
    if(0<b-a&&b-a<3.14)
    {
    {
         cout<<int(b-a)<<" hours and "<<((b-a)-int(b-a))*100<<" mintes"<<endl;
         cout<<"You have to pay 0 bath"<<endl;
    }
    if(3.14<b-a&&b-a<6.14)
    {
         cout<<int(b-a)<<" hours and "<<((b-a)-int(b-a))*100<<" mintes"<<endl;
         cout<<"You have to pay "<<int(b-a)*20<<" bath"<<endl;
    }
    if(6.14<b-a&&b-a<8.14)
    {
         cout<<int(b-a)<<" hours and "<<((b-a)-int(b-a))*100<<" mintes"<<endl;
         cout<<"You have to pay "<<(3*20)+((int(b-a)-6)*50)<<" bath"<<endl;
    }
    if(b-a>8.14)
    {
        cout<<int(b-a)<<" hours and "<<((b-a)-int(b-a))*100<<" mintes"<<endl;
        cout<<"You have to pay 500 bath"<<endl;
    }
    }
   else
   cout<<"You can't leave before arrival time"<<endl;
    system("pause");
    return 0;
}
