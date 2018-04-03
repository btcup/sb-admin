#include <iostream>
#include <cmath>
using namespace std ;
int main () {char object,util;
double Lcost,Bcost,sum,tax;
int Bage,Lage;
cout<<"Enter ojective(U,W)"<<endl;
cin>>object;
if (object=='W'){
                 cout<<"Enter land cost :"<<endl ;
                cin>>Lcost;
                cout<<" land age :"<<endl ;
                cin>>Lage;
                cout<<"your estate cost is "<<Lcost<<" million bath."<<endl ;sum=Lcost*1.2/100;
                if           (Lage<=3)  cout<<"your tax is exemption"<<endl ;
                else if      (Lage<=7&&Lage>=4)  cout<<"The land tax is "<<sum<<"minllion bath"<<endl ;       
                else        { sum=sum*2; cout<<"The land tax is "<<sum<<"minllion bath"<<endl ;}
                }
if (object=='U'){ cout<<"Enter utilization"<<endl ; 
                 cin>>util;
                 cout<<"Enter land cost"<<endl ; 
                 cin>>Lcost;
                 cout<<"Enter building cost "<<endl ; 
                 cin>>Bcost;
                 cout<<"Building age"<<endl ;             
                 cin>>Bage;
    if(Bage<=10)sum=Bcost-Bcost*1.5*Bage/100    ; 
    if(Bage<=40&&Bage>=11)        sum=Bcost-Bcost*1.8*Bage/100;
    else sum=Bcost-Bcost*70.8/100;
                 cout<<"your estate cost is "<<sum<<" million bath."<<endl ;
    if(util='A') tax=sum*0.06/100; {if (Bcost>60)tax=tax*2;
    if(Bcost<=20)cout<<"your tax is exemption"<<endl ;
    }
    
 
                 
     if  (util='B')   tax=sum*0.3/100       {if (Bcost>=21&&Bcost<=50)tax=tax*0.5;
     if (Bcost>=51 tax=tax*0.7;}
        cout"The land tax is "<<sum<<"minllion bath"<<endl ;           
        }   cout"The land tax is "<<sum<<"minllion bath"<<endl ;
                 

 system ("pause");
 return 0 ;
}
