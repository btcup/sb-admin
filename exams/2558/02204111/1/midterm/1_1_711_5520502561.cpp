#include<iostream>
using namespace std;
int main()
{
    int usage,volt;
    double a1,a2,a3,a31,a4,b,v1,v2,v3,v4;
    const float ft=46.38;
          cout<<"Please input usage : ";
          cin>>usage;
          a1=2.4649*usage;
          a2=150*1.8047;
          a3=(usage-150)*2.7781;
          a31=(400-150)*2.7781;
          a4=(usage-400)*2.9780;
          b=(ft*usage)/100;
          v1=(a1+b+228.17)*0.07;
          v2=(a2+40.90+b)*0.07;
          v3=(a2+a3+40.90+b)*0.07;
          v4=(a2+a31+a4+40.90+b)*0.07;
          if(usage<0)
          {
                     cout<<"Invalid Input!!!"<<endl;
          }
          else if(usage>=0)
          {
                         cout<<"Please input voltage : ";
                         cin>>volt;
          if(volt>=22&&volt<=33)
          {
                                cout<<"Electricity Cost : "<<a1<<endl;
                                cout<<"Service : 228.17"<<endl;
                                cout<<"Ft : "<<b<<endl;
                                cout<<"Vat7% : "<<v1<<endl;
                                cout<<endl;
                                cout<<"Total cost : "<<a1+b+v1+228.17<<endl;
          }
          else
          {
              if(usage>=0&&usage<=150)
              {
                                cout<<"Electricity Cost 0-150 : "<<a2<<endl;
                                cout<<"Service : 40.90"<<endl;
                                cout<<"Ft : "<<b<<endl;
                                cout<<"Vat7% : "<<v2<<endl;
                                cout<<endl;
                                cout<<"Total cost : "<<a2+40.90+b+v2<<endl;
              }
              else if(usage>=0&&usage<=400)
              {
                                cout<<"Electricity Cost 0-150 : "<<a2<<endl;
                                cout<<"Electricity Cost 151-400 : "<<a3<<endl;
                                cout<<"Service : 40.90"<<endl;
                                cout<<"Ft : "<<b<<endl;
                                cout<<"Vat7% : "<<v3<<endl;
                                cout<<endl;
                                cout<<"Total cost : "<<a2+a3+40.90+b+v3<<endl;
              }
              else if(usage>400)
              {
                                cout<<"Electricity Cost 0-150 : "<<a2<<endl;
                                cout<<"Electricity Cost 151-400 : "<<a31<<endl;
                                cout<<"Electricity Cost 400-> : "<<a4<<endl;
                                cout<<"Service : 40.90"<<endl;
                                cout<<"Ft : "<<b<<endl;
                                cout<<"Vat7% : "<<v4<<endl;
                                cout<<endl;
                                cout<<"Total cost : "<<a2+a31+a4+40.90+b+v4<<endl;
              }
                   
          }
          }
system("pause");
return 0;
}
          
                                
