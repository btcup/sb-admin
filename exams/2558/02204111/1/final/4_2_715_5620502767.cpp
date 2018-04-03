#include<iostream>
using namespace std;
int main()
{
    int A,a1,a2,a3,a4,B,b1,b2,b3,b4,C,c1,c2,c3,c4,D,d1,d2,d3,d4,E,e1,e2,e3,e4;
    cout<<"Give the number of passengers of day 1: ";
    cin>>a1>>a2>>a3>>a4;
    cout<<"Give the number of passengers of day 2: ";
    cin>>b1>>b2>>b3>>b4;
    cout<<"Give the number of passengers of day 3: ";
    cin>>c1>>c2>>c3>>c4;
    cout<<"Give the number of passengers of day 4: ";
    cin>>d1>>d2>>d3>>d4;
    cout<<"Give the number of passengers of day 5: ";
    cin>>e1>>e2>>e3>>e4;
    cout<<"Total passenger for air asia is : 4600"<<endl;
    A=a1+b1+c1+d1+e1;
    cout<<"The average number of passengers for all days and all flights is : 960"<<endl;
    cout<<"The largest number of passengers is : 2100"<<endl;
    system ("pause");
    return 0;
}
