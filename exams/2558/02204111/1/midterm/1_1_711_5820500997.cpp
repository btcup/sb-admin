#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double us,vo,sumco,sumft,vat,total,sumco1,sumco2;
  //i'm cannot perfect run but correct number
  cout<<"Please input usage :";
  cin>>us;
  cout<<"Please input voltage :";
  cin>>vo;
  
  if(vo>=22&&vo<=33)
{ sumco=2.4649*us;
sumft=(46.38*us)/100;
vat=((sumco+sumft+228.17)*7)/100;
total=sumco+sumft+228.17+vat;
  cout<<"Electricity Cost: "<<sumco<<endl;
  cout<<"Service : 228.17"<<endl;
  cout<<"Ft: "<<sumft<<endl;
  cout<<"Vat 7% :"<<double(vat)<<endl;
  cout<<"Total cost: "<<ceil(total)<<" Bath"<<endl;;
  cout<<endl;
  
}
if(vo<=22)
 {
                  
                  
 if(us<=150&&us>=0)
 {sumco=1.8047*us;
sumft=(46.38*us)/100;
vat=((sumco+sumft+40.90)*7)/100;
total=sumco+sumft+40.90+vat;
 cout<<"Electricity Cost 0-150 : "<<sumco<<endl;
 cout<<"Service : 40.90"<<endl;
 cout<<"Ft: "<<sumft<<endl;
 cout<<"Vat 7% :"<<double(vat)<<endl;
 cout<<"Total cost: "<<ceil(total)<<" Bath"<<endl;;
                    }
if(us>=151&&us<=400)
  {sumco=270.705;
  sumco1=(us-150)*2.7781;
  sumft=(46.38*us)/100;
  vat=((sumco+sumft+sumco1+40.90)*7)/100;
  total=sumco+sumft+sumco1+40.90+vat;
  cout<<"Electricity Cost 0-150 : "<<sumco<<endl;
  cout<<"Electricity Cost 151-400 : "<<sumco1<<endl;
  cout<<"Service : 40.90"<<endl;
  cout<<"Ft: "<<sumft<<endl;
 cout<<"Vat 7% :"<<double(vat)<<endl;
  cout<<"Total cost: "<<ceil(total)<<" Bath"<<endl;;
  
  }
  if(us>=401)
  {sumco=270.705;
  sumco1=694.525;
  sumco2=(us-400)*2.9780;
   sumft=(46.38*us)/100;
  vat=((sumco+sumft+sumco1+sumco2+40.90)*7)/100;
  total=sumco+sumft+sumco1+sumco2+40.90+vat;
   cout<<"Electricity Cost 0-150 : "<<sumco<<endl;
  cout<<"Electricity Cost 151-400 : "<<sumco1<<endl;
  cout<<"Electricity Cost 400-> : "<<sumco2<<endl;
  cout<<"Service : 40.90"<<endl;
  cout<<"Ft: "<<sumft<<endl;
 cout<<"Vat 7% :"<<double(vat)<<endl;
  cout<<"Total cost: "<<ceil(total)<<" Bath"<<endl;;
  
       
       
  }
                  
                  
                  
                  
                  } 
  
  
                    
    
system("pause");
return 0;    
}
