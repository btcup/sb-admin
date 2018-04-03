#include<iostream>
using namespace std;
int main()
{
  int x[3][4];
  cout<<"Give the number of passengers of day 1: ";
  cin>>x[0][0]>>x[1][0]>>x[2][0]>>x[3][0];    
   cout<<"Give the number of passengers of day 2: ";
  cin>>x[0][1]>>x[1][1]>>x[2][1]>>x[3][1];       
  cout<<"Give the number of passengers of day 3: ";
  cin>>x[0][2]>>x[1][2]>>x[2][2]>>x[3][2];        
    cout<<"Give the number of passengers of day 4: ";
  cin>>x[0][3]>>x[1][3]>>x[2][3]>>x[3][3];      
    cout<<"Give the number of passengers of day 5: ";
  cin>>x[0][4]>>x[1][4]>>x[2][4]>>x[3][4];        
    cout<<"Total passenger for air asia is : "<<((x[0][0]+x[0][1]+x[0][2]+x[0][3]+x[0][4]))<<endl;
    cout<<"The average number of passengers for all days and all flights is : "<<((x[0][0]+x[0][1]+x[0][2]+x[0][3]+x[0][4]+x[1][0]+x[1][1]+x[1][2]+x[1][3]+x[1][4]+x[2][0]+x[2][1]+x[2][2]+x[2][3]+x[2][4]+x[3][0]+x[3][1]+x[3][2]+x[3][3]+x[3][4])/20)<<endl;
    
  system("pause");
  return 0;  
}
