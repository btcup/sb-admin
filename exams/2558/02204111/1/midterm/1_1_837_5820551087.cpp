#include <iostream>
using namespace std;
int main(){
 int usage vol total;
 float Elec Service Ft Vat;
 cin>>usag>>vol;
 cout<<"Please input usage :"<<usag;
 cout<<"Please input voltage :"<<vol;
 if(vola>=22&&vol<=33){
                  Elec=usag*2.4649;
                  Service=228.17;
                  Ft=(46.38*usag)/100;
                  Vat=Ft/0.7
                  total=Elec+Service+Ft+Vat;
                  cout<<"Electricity Cost :"<<Elec<<endl;
                  cout<<"Service :"<<Service<<endl;
                  cout<<"Ft :"<<Ft<<endl;
                  cout<<"Vat 7%"<<Vat<<endl;
                  cout<<"Total cost"<<total<<"Baht"<<endl;
                  }
                  else if(vol<22)
                  {
                       if(usage>=0 && usage<=150){
                       Elec=usag*1.8047;
                       Service=40.90
                       Ft=(46.38*usag)/100;
                       Vat=Fat/0.7;
                       total= Elec+Service+Fat+Vat;
                       }
                  else if(usage>=151 && usage<=400){
                  Elec=usag*2.7781;
                  Service=40.90;
                  Ft=(46.38*usag)/100;
                  Vat=Fat/0.7;
                  total= Elec+Service+Fat+Vat;
                  }
                  else if(usage>=401){
                   Elec=usag*2.9780;
                  Service=40.90;
                  Ft=(46.38*usag)/100;
                  Vat=Fat/0.7;
                  total= Elec+Service+Fat+Vat;
                  }
                  cout<<"Electricity Cost 0-150 :"<<Elec;endl;
                  cout<<"Service :"<<Service>>endl;
                  cout<<"Ft :"<<Ft<<endl;
                  cout<<"Vat 7%"<<Vat<<endl;
                  cout<<"Total cost"<<total<<"Baht"<<endl;
                  }
                  else if(usage<0){
                       cout<<Invalid Input !!!<<endl;
                       }
                       system("pause");
                       return 0; 
                       }
                  
                       
                      
                  
                  
                  
 
