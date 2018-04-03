#include <iostream>
using namespace std;
int main()
{
 int i,j,Flight[4][5] ;
 cout<<"Give the number of passengers of day 1 : ";
 for(i=0;i<4;i++)
 cin>>Flight[i][0];
              cout<<"Give the number of passengers of day 2 : ";
              for(i=0;i<4;i++)
              cin>>Flight[i][1];
                           cout<<"Give the number of passengers of day 3 : ";
                           for(i=0;i<4;i++)
                           cin>>Flight[i][2];
                                        cout<<"Give the number of passengers of day 4 : ";
                                        for(i=0;i<4;i++)
                                        cin>>Flight[i][3];
                                                     cout<<"Give the number of passengers of day 5 : ";
                                                     for(i=0;i<4;i++)
                                                     cin>>Flight[i][4];
                                                     cout<<endl;
                           
                                                     
 int Total=0 , sum=0 ;
 double average ;
 
 for(i=0;i<=0;i++)
   for(j=0;j<5;j++)
   {
    sum+=Flight[i][j];
   }
cout<<"Total passenger for air asia is : "<<sum<<endl;
cout<<endl; 
                 
 for(i=0;i<4;i++)
   for(j=0;j<5;j++)
  {
   Total+=Flight[i][j];
  }
cout<<"The average number of passengers for all days and all flights is : "<<Total/20.0<<endl;
cout<<endl;

 int min=Flight[0][0] , largest ;
 
 for(i=0;i<4;i++)
   for(j=0;j<5;j++)
   {
    if(Flight[i][j]>min)
    {
     largest = Flight[i][j];
     min = Flight[i][j];
    }
    
   }
cout<<"The largest number of passengers is : "<<largest<<endl;
    
    
    
 system("pause");
 return 0;
}
              
 
     
