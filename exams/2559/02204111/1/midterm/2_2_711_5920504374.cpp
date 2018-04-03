//5920504374 jakkrit wannaphongsai
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
         char objective;
         char utilization;
         double cost,estate,building(cost),land,age;
         cout<<"Enter objective(utilization(B), waste(W):";
         cin>>objective;
         
         if(objective=='U'){
         cout<<"Enter utilization type(business(B), agriculture(A):";
         cin>>utilization;
          if(utilization=='B'){
             cout<<"Enter land cost (million):";
             cin>>cost;
             //cout<<"Enter building cost (million):";
             //cin>>building(cost);
                if(cost<20){
                  estate=cost+(cost*0.3)/100;
                  cout<<"your estate cost is"<<estate<<"("<<cost<<"+"<<(cost*0.3)/100<<")million bath"<<endl;}
                if(cost>=20&&cost<50){
                  estate=cost+(cost*0.5)/100;
                  cout<<"your estate cost is"<<estate<<"("<<cost<<"+"<<(cost*0.5)/100<<")million bath"<<endl;}
                if(cost>=50){
                  estate=cost+(cost*0.7)/100;
                  cout<<"your estate cost is"<<estate<<"("<<cost<<"+"<<(cost*0.7)/100<<")million bath"<<endl;}}
          if(utilization=='A'){
             cout<<"Enter land cost (million):";
             cin>>cost;
             //cout<<"Enter building cost (million):";
             //cin>>building(cost);
                if(cost<30){
                   estate=cost;
                   cout<<"your estate cost is"<<estate<<")million bath"<<endl;}
                if(cost>=30&&cost<60){
                   estate=cost+(cost*0.06)/100;
                   cout<<"your estate cost is"<<estate<<"("<<cost<<"+"<<(cost*0.06)/100<<")million bath"<<endl;}
                if(cost>=50){
                   estate=cost+(cost*1.2)/100;
                   cout<<"your estate cost is"<<estate<<"("<<cost<<"+"<<(cost*1.2)/100<<")million bath"<<endl;}}
           if(objective=='W'){
               cout<<"land cost (million):";
               cin>>land;
               cout<<"land age:";
               cin>>age;
                  if(age>=1&&age<=3){
                     cout<<"your estate cost is"<<age<<"30 million bath"<<endl;
                     cout<<"the land tax is exemption"<<endl;}
                  if(age>=4&&age<=6){
                      estate=land+(land*1.2)/100;
                     cout<<"your estate cost is"<<estate<<"("<<land<<"+"<<(land*1.2)/100<<")million bath"<<endl;
                     cout<<"the land tax is exemption"<<endl;}
                   if(age>=7){
                      estate=land+(land*2.4)/100;
                     cout<<"your estate cost is"<<estate<<"("<<land<<"+"<<(land*2.4)/100<<")million bath"<<endl;
                     cout<<"the land tax is exemption"<<endl;}}}
           system("pause");
           return 0;
}            
            
                              
          
         
         
         
    
