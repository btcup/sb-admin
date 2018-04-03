#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,suma=0,sumb=0,sumc=0,sumd=0;
    int Avg,avga,avgb,avgc,avgd,;
    int max;
 for(n=1;n<=5;n++)
    {
    cout<<"Give the number of passengers of day"<<n<< ":";
    cin>>a>>b>>c>>d; 
    suma=suma+a;
    sumb=sumb+b;
    sumc=sumc+c;
    sumd=sumd+d;
    avga=suma/5;
    avgb=sumb/5;
    avgc=sumc/5;
    avgd=sumd/5;
    Avg=(avga+avgb+avgc+avgd)/4;
    }

cout<<"                                      "<<endl;
    cout<<"Total passsenger for air asia is :";
 
    cout<< suma<<endl;
cout<<"                                      "<<endl;
cout<<"The average number of passengers for all days and all flights is :";    
cout<<Avg;
cout<<"                                      "<<endl;

cout<<"The largest number of passengers is :";
cout<<max;

  system ("pause");
  return 0;
}
