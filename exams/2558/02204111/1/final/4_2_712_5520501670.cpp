#include <iostream>
using namespace std;
int main()
{
    int i,j;
    double day1,day2,day3,day4,day5,total_pass,avg_num,largest_num;
    double A[4][5];
    int sum=0;
    for(i=0;i<4;i++)
    {
       for(j=0;j<5;j++)
       {
           cin>> A[i][j];
       }
    }
    
    
    cout<<"Give the number of passengers of day 1:";
    cin>> day1;
    cout<<"Give the number of passengers of day 2:";
    cin>> day2;
    cout<<"Give the number of passengers of day 3:";
    cin>> day3;
    cout<<"Give the number of passengers of day 4:";
    cin>> day4;
    cout<<"Give the number of passengers of day 5:";
    cin>> day5;
    
    
    cout<<"Total passenger for air asia is :";
    cin>>total_pass;
    cout<<"The average number of passengers for all days and all flights is :";
    cin>>avg_num;
    cout<<"The largest number of passengers is :";
    cin>>largest_num;
                    
    system("pause");
    return 0;
}
