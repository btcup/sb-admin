//5520501157_miss Thidarat Wansamngam
#include<iostream>
using namespace std;
int main()
{
    double h,ti,to;
    cout<<"Arrival time : ";
    cin>>ti;
    cout<<"Leave time : ";
    cin>>to;
    
    
    if(h>=0&&h<=3)
    {
     {cout<<"you have to pay 0 bath";
     }    
       
       if(h>=4&&h<=6)
        {
        cout<<"you have to pay "<<h*20<<"bath";
     
        }
         else if(h>=7&&h<=8)
        {
        cout<<"you have to pay "<<(h*50)<<"bath";
        }
        else
        {
        cout<<"you have to pay 500 bath";
        }
    }
    else
    {
    cout<<"You can't leave before arrival time";
    }
    
    
    system("pause");
    return 0;
    }
