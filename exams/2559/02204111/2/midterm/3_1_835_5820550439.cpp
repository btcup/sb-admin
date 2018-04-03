#include<iostream>
using namespace std;
int main()
{
    double x,y,a,b,c,d,e,f;
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"leave time :";
    cin>>y;
    
    a=(int(x)*60)+(x-int(x));
    b=(int(y)*60)+(y-int(y));
    c=int(b-a)/60;
    e=(x-int(x))*100;
    f=(y-int(y))*100;
    d=(f-e);
    
    
    if (0<=c&&c<=3)
    {
             cout<<c<<"hours and"<<d<<"minutes"<<endl;            
             cout<<"you have to pay 0 bath "<<endl;
    }
    else if (4<=c&&c<=6)
    {
             cout<<c<<"hours and"<<d<<"minutes"<<endl;
             cout<<"you have to pay "<<(c-3)*20<<endl;
    }
    else if (7<=c&&c<=8)
    {
             cout<<c<<"hours and"<<d<<"minutes"<<endl;
             cout<<"you have to pay "<<(c-5)*50+60<<endl;
    }
    else if (c>8)
    {
             cout<<c<<"hours and"<<d<<"minutes"<<endl;
             cout<<"you have to pay 500 bath"<<endl;
    }
    else if (c<0)
    {
             cout<<"you can't leave before arrival time"<<endl;
    }
    system("pause");
    return 0;
}
