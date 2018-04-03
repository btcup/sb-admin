#include<iostream>

using namespace std;
int main()
{
 double p[4][5];

 cout<<"Give the number of passengers of day 1:"<<" "<<"";
 cin>>p[0][0];
 cin>>p[1][0];
 cin>>p[2][0];
 cin>>p[3][0];
 cout<<"Give the number of passengers of day 2:"<<" "<<"";
 cin>>p[0][1];
 cin>>p[1][1];
 cin>>p[2][1];
 cin>>p[3][1];
cout<<"Give the number of passengers of day 3:"<<" "<<"";
 cin>>p[0][2];
 cin>>p[1][2];
 cin>>p[2][2];
 cin>>p[3][2];
 cout<<"Give the number of passengers of day 4:"<<" "<<"";
 cin>>p[0][3];
 cin>>p[1][3];
 cin>>p[2][3];
 cin>>p[3][3];   
 cout<<"Give the number of passengers of day 5:"<<" "<<"";
 cin>>p[0][4];
 cin>>p[1][4];
 cin>>p[2][4];
 cin>>p[3][4];
 cout<<endl;  
 cout<<"Total passenger for route 101 is :"<<" "<<"";
 cout<< p[0][0]+p[0][1]+p[0][2]+p[0][3]+p[0][4]<<endl;
 cout<<endl;
 cout<<"The averge number of passengers for all day and all routes is :"<<" "<<"";
 cout<< (p[0][0]+p[0][1]+p[0][2]+p[0][3]+p[0][4]+p[1][0]+p[1][1]+p[1][2]+p[1][3]+p[1][4]+p[2][0]+p[2][1]+p[2][2]+p[2][3]+p[2][4]+p[3][0]+p[3][1]+p[3][2]+p[3][3]+p[3][4])/20<<endl;
 cout<<endl;
 cout<<"The largest number of passengers of thu is :"<<" "<<"";
 if(p[2][3]>p[1][3]&&p[2][3]&&p[3][3])
    cout<<p[2][3]<<endl;
 else
  if(p[1][3]>p[0][3]&&p[2][3]&&p[3][3])
 cout<<p[1][3]<<endl;
else
  if(p[0][3]>p[1][3]&&p[0][3]&&p[3][3])
 cout<<p[0][3]<<endl;
 else
  if(p[3][3]>p[1][3]&&p[2][3]&&p[0][3])
 cout<<p[3][3]<<endl;
 
    
    
system("pause");
return 0;
}
