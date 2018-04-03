//5620502121 Rachaha Lalitpattarakit 

#include<iostream>
using namespace std;
int main() 
{
   double Atime,Ltime,ttime;
   int bath;
   cout<<"Arrival time : ";
   cin>>Atime; 
   cout<<"Leave time : ";
   cin>>Ltime;
   ttime=Ltime-Atime;
   cout<<""<<ttime<<"hour"<<endl;
   if(ttime>0) {
               if(ttime<=3) bath=0; 
                
               if(ttime>=4&&ttime<=6) bath=20; 
                
               if(ttime>=7&&ttime<=8) bath=50; 
                
               if(ttime>8) bath=500;
               
               cout<<"You have to pay "<<bath;cout<<"bath"<<endl;
               }
                
                  
                      
          




system("pause");
return 0;


}
