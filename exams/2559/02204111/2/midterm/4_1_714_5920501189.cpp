//5920501189 Patcharawan Rerkchaimongkol
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char type;
    float Arrival,Leave,x,sum;
    int a,b;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";
    cin>>type;
    if(type == 'M')
    {
        cout<<"Arrival time : ";
        cin>>Arrival;
        cout<<"Leave time : ";
        cin>>Leave;
        cout<<endl;
        x=Leave-Arrival;
        b=(x*60)/10+4;
        if(Leave<Arrival)
        {
            cout<<"You can't leave before arrival time"<<endl;
        }
        else if(x<=3)
        {
            cout<<floor(x)<<" hours and "<<b<<" minutes"<<endl;
            cout<<"You have to pay 0 bath"<<endl;
        }
        else if(x>=4&&x<=7)
        {
            cout<<floor(x)<<" hours and "<<b<<" minutes"<<endl;
            sum = x*10;
            cout<<"You have to pay "<<sum<<" bath"<<endl;
        }
        else if(x>7)
        {
            cout<<floor(x)<<" hours and "<<b<<" minutes"<<endl;
            cout<<"You have to pay 150 bath"<<endl;
        }           
    }
    else if(type == 'C')
    {
        cout<<"Arrival time : ";
        cin>>Arrival;
        cout<<"Leave time : ";
        cin>>Leave;
        cout<<endl;
        x=Leave-Arrival;
        b=(x*60)/10+4;
        if(Leave<Arrival)
        {
            cout<<"You can't leave before arrival time"<<endl;
        }
        else if(x<=2)
        {
            cout<<floor(x)<<" hours and "<<b<<" minutes"<<endl;
            cout<<"You have to pay 0 bath"<<endl;
        }
        else if(x>=3&&x<=5)
        {
            cout<<floor(x)<<" hours and "<<b<<" minutes"<<endl;
            sum = x*30;
            cout<<"You have to pay "<<sum<<" bath"<<endl;
        }
        else if(x>=6&&x<=8)
        {
            cout<<floor(x)<<" hours and "<<b<<" minutes"<<endl;
            sum = x*50;
            cout<<"You have to pay "<<sum<<" bath"<<endl;
        }
        else if(x>8)
        {
            cout<<floor(x)<<" hours and "<<b<<" minutes"<<endl;
            cout<<"You have to pay 500 bath"<<endl;
        }            
    }
    system ("pause");
    return 0;
}
