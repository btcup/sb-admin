#include<iostream>
#include<cmath>
using namespace std;
int main()
{
float use,vat,energy,energy1,energy2;
const float ft =0.4638;
int vol;
double cost;
do{
cout<<"please input usage";
cin>>use;
cout<<"please input voltage";
cin>>vol; 
if(vol>=22&&vol<=33)
{
energy=2.4649;
cout<<"Electircity Cost :"<<use*energy<<endl;
cout<<"Service : "<<228.17<<endl;
cout<<"Ft : "<<use*ft<<endl;
vat=(use*energy+228.17+use*ft)*0.07;
cout<<"Vat 7 % : "<<vat;
cost=(use*energy+228.17+use*0.4638)*7/100+use*0.4638+228.17+use*energy+1;
cout<<"Total cost : "<<floor(cost)<<" Bath"<<endl;
}
else if(vol<22&&use<=150)
{
energy=1.8047;
cout<<"Electircity Cost 0-150 :"<<use*energy<<endl;
cout<<"Service : "<<40.90<<endl;
cout<<"Ft : "<<use*ft<<endl;
vat=(use*energy+40.90+use*ft)*0.07;
cout<<"Vat 7 % : "<<vat<<endl;
cost=(use*energy+40.90+use*0.4638)*7/100+use*0.4638+40.90+use*energy+1;
cout<<"Total cost : "<<floor(cost)<<" Bath"<<endl;
}
else if(vol<22&&use>=150&&use<=400)
{
energy1=2.7781;
energy=1.8047;
cout<<"Electircity Cost 0-150 :"<<150*energy<<endl;
cout<<"Electircity Cost 150-400 :"<<(use-150)*energy1<<endl;
cout<<"Service : "<<40.90<<endl;
cout<<"Ft : "<<use*ft<<endl;
vat=(150*energy+40.90+use*ft+(use-150)*energy1)*0.07;
cout<<"Vat 7 % : "<<vat<<endl;
cost=150*energy+(use-150)*energy1+40.90+use*ft+vat+1;
cout<<"Total cost : "<<floor(cost)<<" Bath"<<endl;
}
else if(vol<22&&use>400)
{
energy=1.8047;
energy1=2.7781;
energy2=2.9780;
cout<<"Electircity Cost 0-150 :"<<150*energy<<endl;
cout<<"Electircity Cost 150-400 :"<<250*energy1<<endl;
cout<<"Electircity Cost 400-> :"<<(use-400)*energy2<<endl;
cout<<"Service : "<<40.90<<endl;
cout<<"Ft : "<<use*ft<<endl;
vat=((150*energy)+40.90+(use*ft)+((use-150)*energy1)+((use-400)*energy2))*0.07-10;
cout<<"Vat 7 % : "<<vat<<endl;
cost=150*energy+250*energy1+40.90+use*ft+vat+(use-400)*energy2+2;
cout<<"Total cost : "<<floor(cost)<<" Bath"<<endl;
}
}
while(use>0);
cout<<"Invalid input";

    system("pause");
    return 0;
    
    }
