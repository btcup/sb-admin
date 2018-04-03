#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 char a,b;
 float c,d;
 int e,f;
 cout<<"Enter objective (Utilization, Waste) : ";
 cin>>a;
 if(a=='U')
 {
 cout<<"Enter utilization type (Business, Agriculture) : ";
 cin>>b;
 if(b=='B')
 cout<<"Enter land cost (million) : ";
 cin>>c;
 cout<<"Enter building cost (million) : ";
 cin>>d;
 if(b=='A')
 cout<<"Enter land cost (million) : ";
 cin>>c;
 cout<<"Enter building cost (million) : ";
 cin>>d;
 }
 else if(a=='W')
 {
 cout<<"land cost (million) : ";
 cin>>c;
 cout<<"land age : ";
 cin>>f;
 cout<<"Your estate cost is "<<c<<" million bath."<<endl;
 if(f>3&&f<7)
 cout<<"The land tax is "<<(c*1.2)/100<<" million bath."<<endl;
 } 
system("pause");
return 0;   
}
