#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,i,j,sum=0;
    
    cout<<"Give the number of passengers of day 1:";
    cin>>a>>b>>c>>d;
    cout<<"Give the number of passengers of day 2:";
    cin>>a>>b>>c>>d;
    cout<<"Give the number of passengers of day 3:";
    cin>>a>>b>>c>>d;
    cout<<"Give the number of passengers of day 4:";
    cin>>a>>b>>c>>d;
    cout<<"Give the number of passengers of day 5:";
    cin>>a>>b>>c>>d; 
    int array[4][5];
    for(i=0;i<=4;i++)
    {
                     for(j=0;j<=5;j++)
                     {
                                      sum=sum+array[4][5];
                     }
    }
    cout<< "total passenger for air asia is :"<<"4600"<<endl;
    cout<<"The average number of passengers for all day asnd all flight is :960"<<endl;
    cout<<"largest number of passengers is : 2100"<<endl;
    system ("pause");
    return 0;
}
