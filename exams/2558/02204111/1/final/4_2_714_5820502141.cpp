#include<iostream>
using namespace std;
int main (){

float a[4][5],x,i,j;
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
cout<<"Total passenger for air asia is:"<<a[0][0]+a[0][1]+a[0][2]+a[0][3]+a[0][4]<<endl;

x=(a[0][0]+a[1][0]+a[2][0]+a[3][0]+a[0][1]+a[1][1]+a[2][1]+a[3][1]+a[0][2]+a[1][2]+a[2][2]
+a[3][2]+a[0][3]+a[1][3]+a[2][3]+a[3][3]+a[0][4]+a[1][4]+a[2][4]+a[3][4])/20;

cout<<"The average number of passengers for all days and all flights is:"<<x<<endl;
cout<<"The largest number of passengers is :";


system("pause");
return 0;
}
