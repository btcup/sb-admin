//5920503866 Laddawan Ngiwdee
#include<iostream>
using namespace std;
int main()
{
    char  a, b,L,M,S,A;
    float x,y,z,i,t,build,yt,yy;
    cout<<"Enter objective (Living, Agriculture) : ";
    cin>>a;
    
   cout<<"Enter living type (Main, Second) : ";
   cin>>b;
   cout<<"\nEnter land cost (million) : ";
   cin>>x;
   cout<<"Enter building cost (million) : ";
   cin>>y;
   cout<<"build age : ";
   cin>>z;         
   
   if(z>=1&&z<=15)    
       yt=y*(z*99.988);
   
   if(z>=16&&z<=40)
       yy=y-15;
       yt=y*(99.82+(yy*99.975));
   
   
       
   t=x+yt ;       
    cout<<"Your estate cost is "<<t<<" ("<<x<<"+"<<y<<") million bath";
 
    
    
    
    
    
    
    
    
    
    
system("pause");
return 0;
}
