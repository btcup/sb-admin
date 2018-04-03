#include <iostream>
using namespace std;
int main()
{
    int usa,vol;
    double Cost,Cost1,Cost2,Cost3,Service,Ft,Vat, Vat1,Service1,Total,Total1;
     Service=228.17;
    cout<<"please input usage : ";
    cin>>usa;
    if(usa<0)
    {
     cout<<"Invalid Input !!!"<<endl;        
    }
    else if(usa>0)
    {
    cout<<"please input voltage :";
    cin>>vol;
    if(vol<=33 && vol>=22)
    {
    Cost=usa*2.4649;
    Service=228.17;
    Ft=46.38*usa/100;
    Vat=(Cost+Service+Ft)*7/100;
    ceil(Total)=Cost+Service+Ft+Vat;
    cout<<"Electricity Cost :"<<Cost<<endl;
    cout<<"Service : "<<Service<<endl;
    cout<<"Ft  :"<<Ft<<endl;
    cout<<"Vat 7% :"<<Vat<<endl;
    cout<<"Total cose :"<<Total<<endl;
    }
    
   else 
     {
      Service1=40.90;
     Cost1=usa*1.8047;
     Cost2=usa*2.7781;
     Cost3=usa*2.9780; 
     Vat1=(Cost1+Cost2+Cost3+Service1+Ft)*7/100; 
     Total1=Cost1+Cost2+Cost3+Service1+Ft+Vat1;
     
     if(usa>=0 && usa<=150)
      cout<<"Electricity Cost 0-150:"<<Cost1<<endl;
     else if(usa>=151 && usa<=400)  
      cout<<"Electricity Cost 0-150:"<<Cost2<<endl;
     else if(usa>=401)
       cout<<"Electricity Cost 0-150:"<<Cost3<<endl;
       
    cout<<"Service : "<<Service1<<endl;
    cout<<"Ft  :"<<Ft/100<<endl;
    cout<<"Vat 7%"<<Vat<<endl;
    cout<<"Total cose :"<<Total1<<endl; 
    
    
 }
    }
    
   
    
    system ("pause");
    return 0;
    
}
