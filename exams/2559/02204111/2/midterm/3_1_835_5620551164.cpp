//5620551164 Walalak Sirimongkolrat
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    int a,b,t;
    double x,y,z;
    cout<<"Arrival time:";
    cin>>x;
    cout<<"Leave time:";
    cin>>y;
    z=y-x;
    t=z*100;
    a=t%100;
    if(a<=15){
              
             if(z<=3){
             t=z*0;
             cout<<"You have to pay"<<t<<"bath"<<endl;
             }
             else if(z>3&&z<+6){
             t=(z-3)*20;
              cout<<"You have to pay"<<t<<"bath"<<endl;
              }
              else if(z>6&&z<=8){
              t=(z*0)+(z*20)+(z*50);
              }
              else{
                   cout<<"You have to pay 500 bath"<<endl;
                   }
              }
    else{
         z=z+1;
         if(z<=3){
         t=z*0;
         cout<<"You have to pay"<<t<<"bath"<<endl;
         }
         else if(z>3&&z<+6){
         t=(z-3)*20;
         cout<<"You have to pay"<<t<<"bath"<<endl;
         }
         else if(z>6&&z<=8){
         t=(z*0)+(z*20)+(z*50);
         }
         else{
         cout<<"You have to pay 500 bath"<<endl;
                    }
         }
    
    
    system("pause");
    return 0;
}
    
    
    
