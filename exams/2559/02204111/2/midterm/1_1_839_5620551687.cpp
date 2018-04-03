//5620551687 nattasit piyakittiyamas
#include<iostream>
using namespace std;
int main()
{
    char h;
    float x,y,z,f,sum,month;
    cout<<"----------- Car lease calculartor--------"<<endl;
    cout<<"Enter car model :";
    cin>>h;
    
    if(h!='A'&&h!='B'&&h!='C'&&h!='J')
    cout<<"Erroe"<<endl;
      else
      {
          cout<<"Enter number of year (1-6) :";
          cin>>x;
          if (x<1&&x>6)
          cout<<"Error! number of year is not in range"<<endl;
               else
               {
                   cout<<"Enter percentage of down payment :";
                   cin>>z;
                   
                   if(h=='A'&&x<4){
                   f=1385000-(1385000*(z/100));                
                   sum=f*((2.09-0.1)/100)*x;}
                   else if (h=='A'&&x>=4){
                   sum=f*(2.09/100)*x;
                   
                   }
                   if (h=='B'&&x<4){
                   f=511500-(511500*(z/100));
                   sum=f*((1.79-0.1)/100)*x;}
                   else if (h=='B'&&x>=4)
                   sum=f*(1.79/100)*x;
                   
                   
                    if  (h=='C'&&x<4){
                   f=738000-(738000*(z/100));
                   sum=f*((1.99-0.1)/100)*x;}
                   else if (h=='B'&&x>=4){
                   sum=f*(1.99/100)*x;
                  
                   }
                   if  (h=='D'&&x<4){
                   f=694000-(694000*(z/100));
                   sum=f*((1.99-0.1)/100)*x;}
                   else if (h=='D'&&x>=4){
                   sum=f*(1.99/100)*x;
                   
                   }
                    month=(f+sum)/(x*12);
               }        
       }            
                    
                   cout<<"Finacing amout :"<<f<<endl;
                   cout<<"Amount of interst :"<<sum<<endl;
                   cout<<"Monthly payment :"<<month<<endl;
    system("pause");
    return 0;
}               
                   
    
