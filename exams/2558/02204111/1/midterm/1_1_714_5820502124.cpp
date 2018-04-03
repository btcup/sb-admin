#include <iostream>
using namespace std;
int main ()
{
    int u,v;
    double cost,service,ft,vat,total,x,cost1,cost2,cost3 ;
    cout<<"Please input usage : ";
    cin>>u;
    if (u<0)
    cout<<"Invalid Input !!!"<<endl;  
    if (u>0)  
    { 
    cout<<"Please input voltage : ";
    cin>>v;
    {
    if (v>=22&&v<=33)
    {
    cost = u*2.4649;
    service = 228.17;
    ft = u*0.4638;
    x = cost+service+ft;
    vat = x*(7.0/100);
    cout<<"Electricity Cost :"<<cost<<endl;
    }
    else if (v<22)
    {
       if (u>0)
       {
                if ((u-150)>0)
                { cost1 = 150*1.8047; }
                else 
                { cost1 =u*1.8047; }
       cout<<"Electricity Cost 0-150 :"<<cost1<<endl;
       }
       if (u>150)
       {
                 if ((u-400)>0)
                 { cost2 = 250*2.7781; }
                 else 
                 { cost2 = (u-150)*2.7781; }
       cout<<"Electricity Cost 151-400 :"<<cost2<<endl;
       }
       if (u>400)
       {
                 cost3 = (u-400)*2.9780;
       cout<<"Electricity Cost 401-> :"<<cost3<<endl;
       }
       cost = cost1+cost2+cost3;
       service = 40.90;
       ft = u*0.4638;
       x = cost+service+ft;
       vat = x*(7.0/100);
    
    }
    }  
    total = x+vat;
    cout<<"Service : "<<service<<endl;
    cout<<"Ft : "<<ft<<endl;
    cout<<"Vat 7 % : "<<vat<<endl;
    cout<<endl;
    cout<<"Total cost : "<<total<<endl;
    }  
    
system ("pause");
return 0;
}



