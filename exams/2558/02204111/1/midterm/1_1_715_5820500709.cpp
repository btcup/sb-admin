#include<iostream>
using namespace std;
int main(){
    double v,y,x,f=46.38;
    float s;
    int sum,u;
    cout<<"Please input usage :";
    cin>>u;
    cout<<"Please input voltage :";
    cin>>v;
    if(v<22)
    {float s=40.90;
      if(u<150)
    { double y=1.8047;
        cout<<"Electricity Cost 0-150:"<<y*u;}
      else if(u>150&&u<400)
    { double y=2.7781;
        cout<<"Electricity Cost 151-400:"<<y*u;}
      else
    { double y=2.9780;
        cout<<"Electricity Cost 401->:"<<y*u;}
     }
    cout<<"Service=40.90";
    cout<<"Ft:"<<f*u;
    cout<<"Vat7% :"<<(7*y)/100;
    sum==(v*y)+s+(f*u*v)+(7*y)/100;
    cout<<"Total Cost:"<<sum;
   else if(v>22&&v<33)
     { double y=2.4649;
       float s=228.17;
          cout<<"Electricity Cost :"<<y*u;
     cout<<"Service=228.17";
     cout<<"Ft:"<<f*u;
     cout<<"Vat7% :"<<(7*y)/100;
     sum;=(v*y)+s+(f*u*v)+(7*y)/100
     cout<<"Total Cost:"<<sum;
     }
     
     else
         {cout<<"Invalid Input !!!";}
    system("pausse");
    return 0;
}
