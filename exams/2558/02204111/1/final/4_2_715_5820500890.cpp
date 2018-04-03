#include<iostream>
using namespace std;

int main()

{
    float sum=0,sum1,sum2,sum3,sum4;
    float a[20];
    
    cout<<"Give the number of passengers of day 1 : ";
    for(int i=0;i<4;i++)
    cin>>a[i];
    
    cout<<"Give the number of passengers of day 2 : ";
    for(int i=4;i<8;i++)
    cin>>a[i];
    cout<<"Give the number of passengers of day 3 : ";
    for(int i=8;i<12;i++)
    cin>>a[i];
    cout<<"Give the number of passengers of day 4 : ";
    for(int i=12;i<16;i++)
    cin>>a[i];
    cout<<"Give the number of passengers of day 5 : ";
    for(int i=16;i<20;i++)
    cin>>a[i];
    
    for(int i=0;i<20;i=i+4)
            sum=sum+a[i];
    cout<<"Total passenger for air asia is : "<<sum<<endl; 
    
    
    for(int i=0;i<20;i=i+4)
            sum=sum+a[i];
            sum1=sum/5;
            
    for(int i=1;i<20;i=i+4)
            sum=sum+a[i];
            sum2=sum/5;
            
    for(int i=2;i<20;i=i+4)
            sum=sum+a[i];
            sum3=sum/5;
            
    for(int i=3;i<20;i=i+4)
            sum=sum+a[i];
            sum4=sum/5;
    
    cout<<"The average number of passengerfoe all days and all flights is : "<<
    (sum1+sum2+sum3+sum4)/4<<endl;
    int d=0;
    for(int i=0;i<20;i++)
    {
                     if(a[i]>d)
                     d=a[i];
    }
                     
    cout<<"The largest number of passenger : "<<d<<endl;
    
    system("pause");
    return 0;
    }
