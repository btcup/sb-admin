//5620550516 Thanawat Sittirot
#include<iostream>
using namespace std;
int main(){
    double a,b,c,d,e,f,g,h;
    cout<<"Arrival time : ";cin>>a;
    cout<<"Leave time : ";cin>>b;
    if(b<a)
    cout<<"You can't leave before arrival time"<<endl;
    else{
         c=a-int(a);d=b-int(b);
         if(d>c){
                 e=(d-c)*100;
                 g=int(b)-int(a);
                 cout<<g<<" hours and "<<e<<" minutes"<<endl;
                 }
         else{
              e=(60-c*100)+d*100;
               g=int(b)-int(a)-1;
              cout<<g<<" hours and "<<e<<" minutes"<<endl;
         }
         f=g*60+e;
         if(e>=15){
         g=g+1;
         f=g*60;}
         if(f<=180)
         h=0;
         else if(f<=360)
         h=(g-3)*20;
         else if(f<=480)
         h=((g-6)*50)+60;
         else if(f>480)
         h=500;
         cout<<"You have to pay "<<h<<" bath"<<endl;         
}  
           
    system("pause");
    return 0;
}    
