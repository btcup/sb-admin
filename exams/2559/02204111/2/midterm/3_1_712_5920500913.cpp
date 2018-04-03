#include<iostream> //5920500913 Sukallaya Phoosawad
#include<cmath>
using namespace std;
int main()
{
    float arrival,leave;
    int hours,min;
    cout<<"Arrival time :";
    cin>>arrival;
    cout<<"Leave time :";
    cin>>leave;
    hours=leave-arrival; 
    cout<<hours<<"hours and"<<endl;
    cin>>hours;         
    if(hours<1)
    {
    cout<<"can not leave befor arrival time"<<endl;
    }
    
    if(hours<=3)
    {
    cout<<"you have 0 baht"<<endl;
    }
    if(hours>=4||hours<=6)
    {
    cout<<"you have to pay"<<20*hours<<"baht"<<endl;
    }
    if(hours>=7||hours<=8)
    {
    cout<<"you have to pay"<<50*hours<<endl;
    }
    if(hours>8)
    {
    cout<<"you have pay 500 bath"<<endl;
    }

  
 
   system("pause");
    return 0;
}
