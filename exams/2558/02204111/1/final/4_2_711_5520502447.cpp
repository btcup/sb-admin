#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,z;
int sum=0,w=0;
int T[5][4];
cout<<"Give the number of passenger of day 1 :";
{ 
for(int i=0;i<1;i++)
{
    for (int j=0;j<=3;j++)
    cin>>T[i][j];
}
} 

cout<<"Give the number of passenger of day 2 :";
{for(int i=1;i<2;i++)
{
    for (int j=0;j<=3;j++)
    cin>>T[i][j];
}     
}
cout<<"Give the number of passenger of day 3 :";
{for(int i=2;i<3;i++)
{
    for (int j=0;j<=3;j++)
    cin>>T[i][j];
}}
cout<<"Give the number of passenger of day 4 :";
{for(int i=3;i<4;i++)
{
    for (int j=0;j<=3;j++)
    cin>>T[i][j];
}}

cout<<"Give the number of passenger of day 5 :";
{for(int i=4;i<5;i++)
{
    for (int j=0;j<=3;j++)
    cin>>T[i][j];
}}

cout<<"Tatal passenger for air asia is  :";
for(int i=0;i<=4;i++)
{for(int j=0;j<1;j++)
sum= sum+T[i][j];
}
cout<< sum<<endl;




cout<<"The average nuber of passenger for all days all flights is  :";
for(int i=0;i<=4;i++)
{for(int j=0;j<4;j++)
w= w+T[i][j];
z=w/20;
}
cout<< z<<endl;


cout<<"The largest nuber of passenger  is  :"<<endl;
for(int i=0;i<=4;i++)
{for(int j=0;j<4;j++)
{if(T[i][j]-T[i][j+1]>=0)
cout<<T[i][j];
else 
;
}}


        
system("pause");
return 0 ;
}
