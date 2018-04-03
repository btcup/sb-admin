//5920500123 Tanakorn Lekmark
#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    cout<<"Arrival time:";
    cin>>a;
    cout<<"Leave time:";
    cin>>b;
    c=int((b*60)-(a*60))/60;
    d=-(c+((a*60)-(b*60))/60)*10;
    cout<<c<<"hours and"<<d<<"minutes"<<endl;
    if(c<=3)
    {
            cout<<"You have to pay"<<c*0<<endl;
    
    }
    else if(4<=c<=6)
    {
         c=c-2;
         cout<<"You have to pay"<<c*20<<endl;
    }
    else if(7<=c<=8)
    {
         cout<<"You have to pay"<<c*50<<endl;
    }    
    else
    {
        cout<<"you can't leave before arrival time";
    }
    system("pause");
    return 0;
}
