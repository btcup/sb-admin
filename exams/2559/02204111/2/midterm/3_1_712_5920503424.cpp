//5920503424 Tanaluk Chueaphan
#include<iostream>
using namespace std;
int main()
{
    float x,y,w,z;
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
    z=int(y)-int(x);
    w=((int(y*100)%100)-(int(x*100)%100));
    if(int(z)>0&&int(z)<=3){
             if(w<15){
                     cout<<z<<"hour and"<<w-60<<"minutes"<<endl;
                     cout<<"You have to pay 0 bath"<<endl;
                     }
             else if(w>15){
                     cout<<z<<"hour and "<<w-60<<"minutes"<<endl;
                     cout<<z<<"You have to pay 20 bath"<<endl;
                  }
                  }
    else if(int(z)>=4&&int(z)<=6){
                  if(w<15){
                     cout<<z<<"hour and"<<w+60<<"minutes"<<endl;
                     cout<<"You have to pay"<<(z*20)<<"bath"<<endl;
                     }
                  else if(w>15){
                     cout<<(z-1)<<"hour and "<<w+60<<"minutes"<<endl;
                     cout<<z<<"You have to pay"<<(z*20)+20<<"bath"<<endl;
                  } 
                  } 
    else if(int(z)>=7&&int(z)<=8){
                  if(w<15){
                     cout<<z<<"hour and"<<w<<"minutes"<<endl;
                     cout<<"You have to pay"<<(z*50)<<"bath"<<endl;
                     }
                  else if(w>15){
                     cout<<z<<"hour and "<<w<<"minutes"<<endl;
                     cout<<z<<"You have to pay"<<(z*50)+50<<"bath"<<endl;
                  } 
                  }
     else if(int(z)>8){
                     cout<<(z-1)<<"hour and"<<w+60<<"minutes"<<endl;
                     cout<<"You have to pay 500 bath"<<endl;
                     } 
     else if(y<x)
     cout<<"You can't leave before arrival time"<<endl;    
                  system("pause");
                  return 0;                 
}
