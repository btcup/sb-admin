
//5720551719 Panachai limlee 839


#include <iostream>
using namespace std ;
int main ()
{
    char model ;
    int y,s,f,a,b,c,j;
    float amount,m,k; 
    cout<<"------Car lease calculator --------"<<endl;
    cout<<"Enter car model :" <<endl;
    cin>>model;
    cout<<"Enter number of years (1-6):"<<endl;
    cin>>y;
    cout<<"Enter your salary :"<<endl;
    cin>>s;
    cout<<"-------------------------------"<<endl;
    if(model=='A')
   { 
                  a=1385000;
                  k=2.09/100;
                  y=y;
                  f=a-(a*25)/100;
                  cout<<"Financing amount "<<f<<endl ;
                  amount=(f*k*y);
                  cout<<"Amount of interest : "<<amount<<endl ;
                  m=(amount+f)/(y*12);
                  cout<<"Monthly payment : "<<m<<endl ;
   
                  
    }
    if(model=='B')
    {
                  b=511500;
                  k=1.79/100;
                  y=y;
                  f=b-(b*25)/100;
                  cout<<"Financing amount "<<f<<endl ;
                  amount=(f*k*y);
                  cout<<"Amount of interest : "<<amount<<endl ;
                  m=(amount+f)/(y*12);
                  cout<<"Monthly payment : "<<m<<endl ;
                  
    }
    if(model=='C')
    {
                  c=738000;
                  k=1.99/100;
                  y=y;
                  f=c-(c*25)/100;
                  cout<<"Financing amount "<<f<<endl ;
                  amount=(f*k*y);
                  cout<<"Amount of interest : "<<amount<<endl ;
                  m=(amount+f)/(y*12);
                  cout<<"Monthly payment : "<<m<<endl ;
                  
    }
    if(model=='J')
    {             
                  j=694000;
                  k=1.99/100;
                  y=y;
                  f=j-(j*25)/100;
                  cout<<"Financing amount "<<f<<endl ;
                  amount=(f*k*y);
                  cout<<"Amount of interest : "<<amount<<endl ;
                  m=(amount+f)/(y*12);
                  cout<<"Monthly payment : "<<m<<endl ;
                  
    }
    if(s/2>=m)
    cout<<"Good decision, Enjoy your new car "<<endl;
    else 
    cout<<"The monthly payment is over then 50% of your salary !!"<<endl;
    
    
system ("pause");
return 0 ;
}
