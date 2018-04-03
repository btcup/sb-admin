//5920503564 Wichawat Nathabumrung
#include <iostream>
using namespace std;
int main ()
{ char model; float percent,number,o,i,j,k,n,x,price;
 cout<<"-------Car lease calculater ----------"<<endl;
 cout<<"Enter Car model : "; cin>>model;
 cout<<"Enter Number of years (1-6) : "; cin>>number;
              if(number>0&&number<=6)
              {
               cout<<"Enter Percentage of down payment : "; cin>>percent;
               cout<<"-------------------------------------"<<endl;
               if(model=='C')
               {
                price=738000;            
               x=((price*percent)/100);
                   if(number>=4)
                   {
                   n=1.99;
                   }
                   else if(number<4)
                   {
                   n=1.99-0.1;     
                   }
                   
               }
                if(model=='J')
               {
                 price=694000;           
               x=((price*percent)/100);
                   if(number>=4)
                   {
                   n=1.99;
                   }
                   else if(number<4)
                   {
                   n=1.99-0.1;     
                   }
               }
                 if(model=='B')
               {
                 price=511500;
               x=((price*percent)/100);
                   if(number>=4)
                   {
                   n=1.79;
                   }
                   else if(number<4)
                   {
                   n=1.79-0.1;     
                   }
               }
                 if(model=='A')
               {
                 price=1385000;
               x=((price*percent)/100);
                   if(number>=4)
                   {
                   n=2.09;
                   }
                   else if(number<4)
                   {
                   n=2.09-0.1;     
                   }   
               }
               o=number*12;
               i=(price-x);
               j=((i*n*number)/100);
               k=((i+j)/o);
              cout<<"Financing amount : "<<i<<endl;
              cout<<"Amout of interest : " <<j<<endl;
              cout<<"Monthly payment : "<<k<<endl;
              }
              else
              {
              cout<<"Error!, number of years is not range"<<endl;    
              } 
 system("pause");
 return 0;
}
