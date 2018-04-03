#include<iostream>
using namespace std;
int main()
{
    int a1,x1,y1,z1;
    int a2,x2,y2,z2;
    int a3,x3,y3,z3;
    int a4,x4,y4,z4;
    int a5,x5,y5,z5;
    int total;
    double average;
    int A[4][5];
    cout<<"Give the number of passengers of day 1: ";
    cin>>a1>>x1>>y1>>z1;
    cout<<"Give the number of passengers of day 2: ";
    cin>>a2>>x2>>y2>>z2;
    cout<<"Give the number of passengers of day 3: ";
    cin>>a3>>x3>>y3>>z3;
    cout<<"Give the number of passengers of day 4: ";
    cin>>a4>>x4>>y4>>z4;
    cout<<"Give the number of passengers of day 5: ";
    cin>>a5>>x5>>y5>>z5;
    total=a1+a2+a3+a4+a5;
    cout<<"Total passenger for air asia is : "<<total<<endl;
    average=(a1+a2+a3+a4+a5+x1+x2+x3+x4+x5+y1+y2+y3+y4+y5+z1+z2+z3+z4+z5)/20;
    cout<<"The average number of passengers for all day and all flights is : "<<average<<endl;
    cout<<"The largest number of passengers is : "<<y4<<endl;

    
    
    system("pause");
    return 0;
}
    
    
