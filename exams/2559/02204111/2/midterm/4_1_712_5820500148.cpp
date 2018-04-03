#include <iostream> //5820500148 nattakit teerawong
using namespace std;
int main() 
{
int  a,b,o,d,x,y,z;
char L;
 cout<< "Type of vehicle((C)Car or (M)Motercycle):"<<endl;
 cin>>L;
 cout<<"Arrival time :"<<endl;
 cin>>a>>b;
 cout<<"Leave time :"<<endl;
 cin>>o>>d;
 x=a*60+b
 y=o*60+d
 z=(y-x)/60
     if (L=='c')
     {  
       cout<<z<<"hours and"<<(y-x)%60 <<"minutes"<<endl;
         if(x<=120)
         {
          cout<<"you have to pay 0 bath"<<endl;}
         if(x>=180&&x<=300)
         {
         cout<<"you have to pay "<<(y-x)*30 <<" bath"<<endl;}
         if (x>=3606&&x<=480)        
         {
          cout<<"you have to pay "<<(y-x)*50 <<" bath"<<endl;}
          if(x>=480)
         {
          cout<<"you have to pay  500  bath"<<endl;}
          if(y-x<0)
         {
           cout<<"you can,t leave before arrival time"<<endl;}
     }   
     else if (L=='m')
     {    
        cout<<z<<"hours and"<<(y-x)%60 <<"minutes"<<endl;
            if(x<=180)
           {
             cout<<"you have to pay 0 bath"<<endl;}
            if(x>=240&&x<=420)
           {
            cout<<"you have to pay "<<(y-x)*10 <<" bath"<<endl;}
            if(x>=420)
           {
             cout<<"you have to pay  150  bath"<<endl;}
              if(y-x<0)
           {
            cout<<"you can,t leave before arrival time"<<endl;}
     }  
 system ("pause");
 return 0 ;
}
