//5820551532 Prasomsri
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
 float a , l , t ,k, w, p ,b ;
 int m ,n ;
 cout<< "Arrival time: " ;
 cin>> a ;
 cout<< "Leave time: " ;
 cin>> l ;
 t =l-a;   
 m = (t*100) ;
 n =  m%100 ;
 w = n/100.0 ;
 if(n>60)
 {
 b=n-60;
 if(b>=15)
 k= t-w+1; 
 else
 k= t-w ;
 }
 else if(n<60)
 {
 if(n>=15)
 k= t-w+1; 
 else
 k= t-w ;
 }
 
 if(k>=0&&k<=3)
 p=k*0;
 else if (k>=4&&k<=6)
      p=(k-3)*20; 
      else if(k>=7&&k<=8)
           p=(k-3)*50 ;
           else if(k>8)
           p=500 ;
           else if (k<0)
                cout<< "You can't leave before attival time " ;
 
 cout<<"You have pay"<< p << "bath"  ;
 

 
system("pause");
return 0;    


}    
