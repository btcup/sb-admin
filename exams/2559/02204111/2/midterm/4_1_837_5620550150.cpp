//5620550150 Nattapong Santipholthum
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    char x;
    float a,b,z,d,e;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle):";
    cin>>x;
    cout<<"Arrival time:";
    cin>>a;
    cout<<"Leave time:";
    cin>>b;
    z=(b-a);
    d=int(a*100)%100;
    e=int(b*100)%100;
    if(b>a)
    {
    if(x=='C')
    {
              if(ceil(z)<=2&&ceil(z)>0)
              {
               cout<<int(z)<<"hours and "<< abs(int(e-d))<<"minutes"<<endl;
               cout<<"You have to pay 0 bath"<<endl;       
              }
              else if(ceil(z)>=3&&ceil(z)<=5)
              {
               cout<<int(z)<<"hours and "<< abs((e-d))<<"minutes"<<endl;
               cout<<"You have to pay 30 bath"<<endl;   
              }
              else if(ceil(z)>=6&&ceil(z)<=8)
              {
               cout<<int(z)<<"hours and "<< abs((e-d))<<"minutes"<<endl;
               cout<<"You have to pay 50 bath"<<endl;   
              }
              else 
              {
               cout<<int(z)<<"hours and "<< abs((e-d))<<"minutes"<<endl;
               cout<<"You have to pay 500 bath"<<endl;   
              }    
    }
    else
    {
              if(ceil(z)<=3&&ceil(z)>0)
              {
               cout<<int(z)<<"hours and "<< abs((e-d))<<"minutes"<<endl;
               cout<<"You have to pay 0 bath"<<endl;       
              }
              else if(ceil(z)>=4&&ceil(z)<=7)
              {
               cout<<int(z)<<"hours and "<< abs((e-d))<<"minutes"<<endl;
               cout<<"You have to pay 10 bath"<<endl;   
              }
              else 
              {
               cout<<int(z)<<"hours and "<< abs((e-d))<<"minutes"<<endl;
               cout<<"You have to pay 150 bath"<<endl;   
              }
    }
    }
    else
    {
        cout<<"You can't leave before arrival time"<<endl;
    }
    
 system("pause");
 return 0;   
}
