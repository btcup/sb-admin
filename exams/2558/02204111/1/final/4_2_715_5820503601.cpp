#include<iostream>
using namespace std;
int main(){
    string   a[20];
    double x,sum,avg;
    cout<<"Give the number of passengers of day 1:";
    cin>>a[0][0]>>a[1][0]>>a[2][0]>>a[3][0];
    cout<<"Give the number of passengers of day 2:";
    cin>>a[0][1]>>a[1][1]>>a[2][1]>>a[3][1];
    cout<<"Give the number of passengers of day 3:";
    cin>>a[0][2]>>a[1][2]>>a[2][2]>>a[3][2];
    cout<<"Give the number of passengers of day 4:";
    cin>>a[0][3]>>a[1][3]>>a[2][3]>>a[3][3];
    cout<<"Give the number of passengers of day 5:";
    cin>>a[0][4]>>a[1][4]>>a[2][4]>>a[3][4];
    
    sum=a[0][0]+a[0][1]+a[0][2]+a[0][3]+a[0][4];
    cout<<"Total passenger for air asia is :";
    cin>>sum;
    
    avg=a[0][0]+a[0][1]+a[0][2]+a[0][3]+a[0][4]+a[1][0]+a[1][1]+a[1][2]+a[1][3]+a[1][4]+a[2][0]+a[2][1]+a[2][2]+a[2][3]+a[2][4]+a[3][0]+a[3][1]+a[3][2]+a[3][3]+a[3][4];
    cout<<"The average number of passenger for all days and all flights is:";
    cin>>avg;
    
    cout<<"The largest number of passenger is:";
    
    
    
system("pause");
return 0;
}

