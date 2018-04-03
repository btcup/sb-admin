#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    double day,day1,day2,day3,day4,day5,inday,total_airasia,average,largest ;
    double B[4][5];
    
    cout<<"Give the number of passenger of day 1 : ";
    cin>>a>>b>>c>>d;
    cout<<"Give the number of passenger of day 2 : ";
    cin>>a>>b>>c>>d;
    cout<<"Give the number of passenger of day 3 : ";
    cin>>a>>b>>c>>d;
    cout<<"Give the number of passenger of day 4 : ";
    cin>>a>>b>>c>>d;
    cout<<"Give the number of passenger of day 5 : ";
    cin>>a>>b>>c>>d;
    
   total_airasia=(B[0][0]+B[0][1]+B[0][2]+B[0][3]+B[0][4]);
    
    cout<<"Total passenger for air asia is :";
    cout<<total_airasia<<endl;
    
    
    average=(B[0][0]+B[0][1]+B[0][2]+B[0][3]+B[0][4]+B[1][0]+B[1][1]+B[1][2]+B[1][3]+B[1][4]+B[2][0]+B[2][1]+B[2][2]+B[2][3]+B[2][4]+B[3][0]+B[3][1]+B[3][2]+B[3][3]+B[3][4])/20;
    cout<<"The average number of passenger for all day and all flights is : ";
    cout<<average<<endl;
    
    
    largest=(B[2][3]);
    cout<<"the largest number of passenger is : ";
    cout<<largest<<endl;
    
    
    
    
    
    
    
    
    
    
system ("pause");
return 0;
}
