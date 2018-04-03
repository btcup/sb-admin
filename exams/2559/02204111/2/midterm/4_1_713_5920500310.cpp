//5920500310 Jirayut Kotcharit
#include<iostream>
using namespace std;
int main()
{
    char n;
    float a,b,c,time,h,m,cost;
    cout<<"Type of vehicle((C)Car or (M)Motorcycle):";
    cin>>a;
    cout<<"Arrival:";
    cin>>b;
    cout<<"Leave time:";
    cin>>c;
    time=b-a;
    h=int(time);
    m=(time*100)%100;
    if(a>=b){
             cout<<"You can't leave before arrival time";
             }else if(b>a){
                   cout<<h<<"hours and "<<m<<"minutes";
                   }
                   if(n=='C'){
                              if(h==2){
                                       cost=time*0;
                                       }else if(h>=3&&h<=5){
                                             cost=time*30;
                                             }else if(h>=6&&h<=8){
                                                   cost=time*50;
                                                   }else if(h>8){
                                                         cost=500;
                                                         }
                                                         }else if(n=='C'){
                                                               if(h==3){
                                                                        cost=time*0;
                                                                        }else if(h>=4&&h<=7){
                                                                              cost=time*10;
                                                                              }else if(h>7){
                                                                                    cost=150;
                                                                                    }
                                                                                    }
                                                                                    cout<<"You have to pay "<<cost<<"bath";
                                                                                    system("pause");
                                                                                    return 0;
                                                                                    }
                                                                              
            
    
    
    
