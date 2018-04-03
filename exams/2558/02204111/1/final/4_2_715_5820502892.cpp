#include<iostream>
using namespace std;
int main(){
int a[4][5],i,j,b=0,avg=0;
cout<<"Give the number of passengers of day 1:";
for(i=0;i<4;i++){
 j=0;
 cin>>a[i][j];}
 cout<<"Give the number of passengers of day 2:";
 for(i=0;i<4;i++){
 j=1;
 cin>>a[i][j];}
 cout<<"Give the number of passengers of day 3:";
 for(i=0;i<4;i++){
 j=2;
 cin>>a[i][j];}
cout<<"Give the number of passengers of day 4:";
for(i=0;i<4;i++){
 j=3;
 cin>>a[i][j];}
cout<<"Give the number of passengers of day 5:";
for(i=0;i<4;i++){
 j=4;
 cin>>a[i][j];}
 cout<<"Total passenger for air asia is";
 for(j=0;j<5;i++){
 i=0;
 b=b+a[i][j];}
 cout<<b<<endl; 
 cout<<"The average number of passengers for all days and all flights is : ";
 for(i=0;i<4;i++){
 for(j=0;j<5;j++)
 avg=avg+a[i][j];}
 cout<<avg/20<<endl;
 cout<<"The largest number of passengers is : "
 system("pause");
 return 0;
}
