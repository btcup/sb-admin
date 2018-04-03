#include <iostream>
using namespace std;
int main()
{
    double LandCost,BuildingCost,BuildingAge,LandAge,BulidingRefund,estate,tax;
    char objective,type,U,W,A,B;
    
    cout<<"Enter objective (Utilization,Waste) : ";
    cin>>objective;
    /*if utilization*/
    
    if(objective=='U')
    {
                     cout<<"Enter untilization type (Business, Agriculture) : ";
                     cin>>type;
                     cout<<"Enter land cost (million) : ";
                     cin>>LandCost;
    
                     cout<<"Enter building cost (million) : ";
                     cin>>BuildingCost;
    
                     cout<<"Building age : ";
                     cin>>BuildingAge;
    }
    /*if wasted*/
    
    if(objective=='W')
    {
                      cout<<"Enter land cost (million) : ";
                      cin>>LandCost;
                      
                      cout<<"Land age : ";
                      cin>>LandAge;
    }        
    
    /*calculate building refund tax)*/
    if(BuildingAge>=1 && BuildingAge<=10)
    {
                         BulidingRefund=BuildingCost-(BuildingCost*0.015*BuildingAge);
    }
    else if(BuildingAge>=11 && BuildingAge<=40)
    {
                         BulidingRefund=BuildingCost*((10*0.015)+((BuildingAge-10)*0.018));
    }
    else
    {
                         BulidingRefund=BuildingCost*0.708;
    }
    /*end of calculate building refund tax)*/
    
    
    /*calculate estate */
    if(objective=='U')
{
    
    if(type=='B')
    {
                 estate=LandCost+(BuildingCost-BulidingRefund);
                 if(estate<20)
                 {
                 tax=estate*0.003;
                 }
                 else if(estate>=20 && estate<50)
                 {
                 tax=estate*0.005;
                 }
                 else
                 {
                 tax=estate*0.007;
                 }
    }
    if(type=='A')
    {
                 estate=LandCost+(BuildingCost-BulidingRefund);
                 if(estate<30)
                 {
                 tax=estate*0;
                 }
                 else if(estate>=30 && estate<60)
                 {
                 tax=estate*0.006;
                 }
                 else
                 {
                 tax=estate*0.012;
                 }
    }
}
else
{
    estate=LandCost;
    if(LandAge>=1 && LandAge<=3)
    {
                  tax=LandAge*0;
    }
    else if (LandAge>=4 && LandAge<=6)
    {
            tax=(LandAge-3)*0.012;
    }
    else
    {
            tax=((LandAge-3)*0.012)+((LandAge-6)*0.024);
    }
}

cout<<"Your eatete cost is "<<estate<<"( "<<LandCost<<"+"<<BuildingCost-BulidingRefund<<" )"<<" million bath "<<endl;
cout<<"The land tax is "<<tax<<" million bath"<<endl;  
        
    
    
    
    
             
    
    






system("pause");
return 0;
}
