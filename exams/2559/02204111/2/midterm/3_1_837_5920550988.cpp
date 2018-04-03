//5920550988 Kunyarat Lumsuay
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z,d,f;
    int c;
    cout<<"Arrival time:";
    cin>>x;
    cout<<"Leave time:";
    cin>>y;
    z = y-x;
    f = int(z*100);
    d = int(y-x);
    c = int(f)%int(d*100);
    if(z<=3&&c<15)
    {   
        
            cout<<z<<"hours and"<<c<<"minutes"<<endl;
            cout<<"You have to pay"<<(int(z)*0)<<"bath"<<endl;
            if(z>3)
            {
            cout<<int(z)<<"hours and"<<c<<"minutes"<<endl;
            }
            if(c<15)
            {
            cout<<"You have to pay"<<(int(z)*20)<<"bath"<<endl;
            }
            if(c>15)
            {
            cout<<"You have to pay"<<(int(z)*20)+20<<"bath"<<endl;
            }
    }
    else if(z>6)
    {
                cout<<int(z)<<"hours and"<<c<<"minutes"<<endl;
                if(c<15)
                {
                cout<<"You have to pay"<<(int(z)*50)<<"bath"<<endl;
                }
                if(c>15)
                {
                cout<<"You have to pay"<<(int(z)*50)+50<<"bath"<<endl;
                }
    }
    else if(z>8)
    {
                cout<<int(z)<<"hours and"<<c<<"minutes"<<endl;
                if(c<15)
                {
                cout<<"You have to pay"<<(int(z)*500)<<"bath"<<endl;
                }
                if(c>15)
                {
                cout<<"You have to pay"<<(int(z)*500)+500<<"bath"<<endl;
                }
    }
    
    else
    {
        cout<<"You can't leave before arrival time"<<endl;
    }

    
    system("pause");
    return 0;
}
