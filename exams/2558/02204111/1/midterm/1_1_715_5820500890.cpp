#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,elec,Ft,Vat,elec1,elec2,elec3,sum,total;
    cout<<"Please input usage : ";
    cin>>a;
    if(a<=0)
    {cout<<"Invalid Input !!!"<<endl;}
    else 
    {
    cout<<"Please input voltage : ";
    cin>>b;
    cout<<endl;
    
     
    if(b<=33&&b>=22)
    {
        elec = a*2.4649;
        Ft = 0.4638*a;
        sum = elec+Ft+228.17;
        Vat = sum*(0.07);
        total = sum+Vat;
        cout<<"Electricity Cost : "<<elec<<endl;
        cout<<"Service : 228.17"<<endl;
        cout<<"Ft : "<<Ft<<endl;
        cout<<"Vat 7 % : "<<Vat<<endl<<endl;
        cout<<"Total cost : "<<ceil(total)<<" Baht"<<endl;
        }
        
    else if (b<22)
    {
         Ft = 0.4638*a;
         if (a<=150)
         {
           elec1 = 1.8047*a; 
           sum = elec1+Ft+40.90;
           Vat = sum*(0.07);
           total = sum+Vat;
           cout<<"Electricity Cost 0-150 : "<<elec1<<endl;
           cout<<"Service : 40.90"<<endl;
           cout<<"Ft : "<<Ft<<endl;
           cout<<"Vat 7 % : "<<Vat<<endl<<endl;
           cout<<"Total cost : "<<ceil(total)<<" Baht"<<endl;
         }          
         
         else if (a>150&&a<=400)
         {elec1 = 150*1.8047;
         elec2 = (a-150)*2.7781;
         sum = elec1+elec2+Ft+40.90;
           Vat = sum*(0.07);
           total = sum+Vat;
           cout<<"Electricity Cost 0-150 : "<<elec1<<endl;
           cout<<"Electricity Cost 151-400 : "<<elec2<<endl;
           cout<<"Service : 40.90"<<endl;
           cout<<"Ft : "<<Ft<<endl;
           cout<<"Vat 7 % : "<<Vat<<endl<<endl;
           cout<<"Total cost : "<<ceil(total)<<" Baht"<<endl;
         }
         
         else if (a>400)
         {elec1= 150*1.8047;
         elec2= 250*2.7781;
         elec3= (a-400)*2.9780;
         sum = elec1+elec2+elec3+Ft+40.90;
           Vat = sum*(0.07);
           total = sum+Vat;
           cout<<"Electricity Cost 0-150 : "<<elec1<<endl;
           cout<<"Electricity Cost 151-400 : "<<elec2<<endl;
           cout<<"Electricity Cost 401-> : "<<elec3<<endl;
           cout<<"Service : 40.90"<<endl;
           cout<<"Ft : "<<Ft<<endl;
           cout<<"Vat 7 % : "<<Vat<<endl<<endl;
           cout<<"Total cost : "<<ceil(total)<<" Baht"<<endl;
         }
          
         }
         }   
         
             
    system("pause");
    return 0;
    }
