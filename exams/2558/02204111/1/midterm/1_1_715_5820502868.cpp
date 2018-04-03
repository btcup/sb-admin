#include <iostream>
using namespace std;
int main()
{

double us,vo, e1=2.4649,e2=1.8047,e3=2.7781,e4=2.9780,s1=228.17,s2=40.90,ft=46.38;
do{
       
cout<<"Please input usage : ";
cin>>us;
if(us<0)
break;
cout<<"Please input voltage : ";
cin>>vo;
cout<<endl;

if(vo>=22&&vo<=33)
{
  cout<<"Electricity Cost :";
  cout<<e1*us<<endl; 
  cout<<"service : "<<s1<<endl;
  cout<<"Ft : "<<(ft*us)/100<<endl;  
  cout<<"Vat 7% : "<<((e1*us)+s1+((ft*us)/100))*0.07 <<endl ;
  cout<<endl;
  cout<<"Total cost :"<<((e1*us)+s1+((ft*us)/100)+((e1*us)+s1+((ft*us)/100))*0.07)<<endl ;         
}
else if (vo<=22)
{
     if(us<=150)
     {
     cout<<"Electricity Cost 0-150 :";
     cout<<e2*us<<endl; 
     cout<<"service : "<<s2<<endl;
     cout<<"Ft : "<<(ft*us)/100<<endl;  
     cout<<"Vat 7% : " <<((e2*us)+s2+(ft*us)/100)*0.07<<endl;
     cout<<endl;
     cout<<"Total cost :"<<((e2*us)+s2+(ft*us)/100)+((e2*us)+s2+(ft*us)/100)*0.07<<endl;     
     }
     else if(us>=150&&us<=400)
     {
     cout<<"Electricity Cost 0-150 :";
     cout<<e2*150<<endl; 
     cout<<"Electricity Cost 151-400 :";
     cout<<e3*(us-150)<<endl;
     cout<<"service : "<<s2<<endl;
     cout<<"Ft : "<<(ft*us)/100<<endl;  
     cout<<"Vat 7% : "<<((e2*150)+(e3*(us-150))+((ft*us)/100)+s2)*0.07<<endl;
     cout<<endl;
     cout<<"Total cost :"<<((e2*150)+(e3*(us-150))+((ft*us)/100)+s2)+(((e2*150)+(e3*(us-150))+((ft*us)/100)+s2)*0.07)<<endl;      
     }
     else
     {
     cout<<"Electricity Cost 0-150 :";
     cout<<e2*150<<endl; 
     cout<<"Electricity Cost 151-400 :";
     cout<<e3*(400-150)<<endl; 
     cout<<"Electricity Cost 400 -> :";
     cout<<e4*(us-400)<<endl;
     cout<<"service : "<<s2<<endl;
     cout<<"Ft : "<<(ft*us)/100<<endl;  
     cout<<"Vat 7% : "<<((e2*150)+(e3*(400-150))+(e4*(us-400))+s2+((ft*us)/100))*0.07<<endl ;
     cout<<endl;
     cout<<"Total cost :"<<(e2*150)+(e3*(400-150))+(e4*(us-400))+s2+((ft*us)/100)+((e2*150)+(e3*(400-150))+(e4*(us-400))+s2+((ft*us)/100))*0.07<<endl;     
     }

}


}while(1);
cout<<"Invalid Input !!!"<<endl;
system("pause");
return 0;

}
