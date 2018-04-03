#include<iostream>
using namespace std;
int main()
{
    float x,y,z,m;
    int a1,b1,c1,d1;
    cout<<"Give the number of passengers of day 1:";
    cin>>a1>>b1>>c1>>d1;
    
    int a2,b2,c2,d2;
    cout<<"Give the number of passengers of day 2:";
    cin>>a2>>b2>>c2>>d2;
    
    int a3,b3,c3,d3;
    cout<<"Give the number of passengers of day 3:";
    cin>>a3>>b3>>c3>>d3;
    
    int a4,b4,c4,d4;
    cout<<"Give the number of passengers of day 4:";
    cin>>a4>>b4>>c4>>d4;
    
    int a5,b5,c5,d5;
    cout<<"Give the number of passengers of day 5:";
    cin>>a5>>b5>>c5>>d5;
    
    x=a1+a2+a3+a4+a5;
    y=b1+b2+b3+b4+b5;
    z=c1+c2+c3+c4+c5;
    m=d1+d2+d3+d4+d5;
    cout<<"Total passenger for air asia is : "<<(a1+a2+a3+a4+a5)<<endl;
    cout<<"the average number of passengers for all days and all flights is : "<<(x+y+z+m)/20<<endl;
    cout<<"The largest number of passengers is : "<<endl;
    system("pause");
    return 0;
    }
