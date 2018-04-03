#include<iostream>

using namespace std;

int main()

{
         float a,b,c,d;
         char e;         
         {    
              cin>>a;
         cout<<"Arrival time :"<<a<<endl;     
         }
         cin>>b;
         cout<<"Leave time :"<<b<<endl;
         c=int(b)-int(a);
         {
         if(((b-int(b))-(a-int(a)))>0)
         d=(b-int(b))-(a-int(a));
         c=int(b)-int(a);
         
         cout<<c<<"hours and "<<d<<"minutes"<<endl;
         }
         { 
         if(((b-int(b))-(a-int(a)))<0)
         d=((b-int(b)+60)-(a-int(a)));
         cout<<c<<"hours and "<<d<<"minutes"<<endl;
         }
         {
         if(0<b-a<3.9)                 
         e=0;
         cout<<"you have to pay"<<e<<"bath";
         }
         {
         if(3.9<b-a<6.9)
         e=b-a*20;
         cout<<"you have to pay "<<e<<"bath";
         }
         {
         if(6.9<b-a<8)
         e=b-a*50;
         cout<<"you have to pay"<<e<<"bath";
         }
         
         system("pause");
         
         return (0);
         
         }
         
         
         
         
