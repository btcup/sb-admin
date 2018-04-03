/*5920550775 taweesak surahit*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
         char T;
         float a,b,s,D;
         int h,d,m,f;
         cout<<"Type of vehicle ((c)car or (M)Motorcycle):";
         cin>>T;
         cout<<"Arrival time:";
         cin>>a;
         cout<<"Leave time:";
         cin>>b;
         d=b-a;
         s=(b-a)-d;                 ;
         if(T=='M')
         {
                 if(d<=3)
                 {
                 f=0;
                 cout<<d<<"hour and"<<s<<"minutes"<<endl;
                 cout<<"you have to pay"<<f<<"bath"<<endl;
                 }
                 if(d>3&&d<=7)
                 {
                  f=d*10;
                 cout<<d<<"hour and"<<s<<"minutes"<<endl;
                 cout<<"you have to pay"<<f<<"bath"<<endl;
                 }
                 if(d>7)
                 {
                  f=150;
                 cout<<d<<"hour and"<<s<<"minutes"<<endl;
                 cout<<"you have to pay"<<f<<"bath"<<endl;
                 }
                 }
                 else if(T=='C')
                 {
                 if(d<=2)
                 {
                 f=0;
                 cout<<d<<"hour and"<<s<<"minutes"<<endl;
                 cout<<"you have to pay"<<f<<"bath"<<endl;
                 }
                 if(d>=3&&d<=5)
                 {
                  f=d*30;
                 cout<<d<<"hour and"<<s<<"minutes"<<endl;
                 cout<<"you have to pay"<<f<<"bath"<<endl;
                 }
                 if(d>=6&&d<=8)
                 {
                  f=d*50;
                 cout<<d<<"hour and"<<s<<"minutes"<<endl;
                 cout<<"you have to pay"<<f<<"bath"<<endl;
                 }
                  if(d>8)
                 {
                  f=500;
                 cout<<d<<"hour and"<<s<<"minutes"<<endl;
                 cout<<"you have to pay"<<f<<"bath"<<endl;
                 }
                 }
                 
                
         
         system("pause");
         return 0;
         }
         
