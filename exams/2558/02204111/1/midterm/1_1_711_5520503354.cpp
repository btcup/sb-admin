#include <iostream>
using namespace std;
int main()
{
    int usage,voltage;
    double electricity cost,service,Ft,vat;
    double v1=2.4649,v2=1.8047,v3=2.7781,v4=2.9780;
    double s1=228.17,s2=40.90;
    vat=7/100;
    cout<<"Please input usage";
    cin>>usage;
    cout<<"Please input vlotage";
    cin<<voltage;
    {
    if(voltage>=22||voltage<=33)
    {
       total cost=(voltage*v1)+s1+(Ft*voltage)+vat;
       cout<<"Electricity Cost:"<< 
       cout<<"service:"<<s1<<endl;
       cout<<"Ft:"<<
       cout<<"vat 7 %:"<<
       cout<<"Total cost:"<<total cost<<endl;
    }
    else if(voltage<22)
    {
       if(Electricity cost>=0||Electricity cost<=150)
       cout<<"Electricity cost 0-150:"<<
       cout<<"Electricity cost 150-400:"<<
       cout<<"service:"<<s2<<endl;
       cout<<"Ft:"<<
       cout<<"vat 7 %:"<<
       cout<<"Total cost:"<<total cost<<endl;
    }
    system("pause");
    return 0;
}
    
