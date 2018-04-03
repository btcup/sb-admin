//5920503211 Raweepohn Narudeesri-utai
#include<iostream>
using namespace std;
int main()
{
    char g,M,C;
    float x,y;
    cout<<"Type of vihicle ((C)Car or (M)Motorcycle):";
    cin>>g;
    if (g=='M'||g=='C')
    {
    cout<<"Arrival Time :";
    cin>>x;
    cout<<"Leave Time :";
    cin>>y;
    }
    if (y<=x)
    {
             cout<<"you can't leave before arrival time"<<endl;
    } 
    else if (x<y)
    cout<<y-x<<"hours and "<<"minutes"<<endl;
    cout<<"you have to pay"<<"Baht"<<endl;
    system("pause");
    return 0;
}
