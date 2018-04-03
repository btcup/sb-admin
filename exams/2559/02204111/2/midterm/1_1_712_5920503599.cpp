//5920503599 Suwanan Charoenphon
#include<iostream> 
using namespace std;
int main()
{
   char model;
   float x,y,z,n,m;
   cout<<"-------Car lease calculator-----------"<<endl;
   cout<<"Enter car model:";
   cin>>model;
   cout<<"Enter number of year (1-6):";
   cin>>x;
   cout<<"Enter percentage of down payment:";
   cin>>y;
   cout<<"--------------------------------------------"<<endl;
   if(x<4&&model=='C' )
   {
       z= 738000*(y/100);
       cout<<"Financing amount:"<<z<<endl;   
       n= z*1.89*x;
       cout<<"Amount of interest:"<<n<<endl;
        m=(x+n)/(x*12);
       cout<<"Monthly payment:"<<m<<endl;
       }
    else if(x>=4&&model=='C')
   {
       z= 738000*(y/100);
       cout<<"Financing amount:"<<z<<endl;   
       n= z*1.99*x;
       cout<<"Amount of interest:"<<n<<endl;
        m=(x+n)/(x*12);
       cout<<"Monthly payment:"<<m<<endl;
       }
   else if(x<4&&model=='A' )
   {
       z= 1385000*(y/100);
       cout<<"Financing amount:"<<z<<endl;  
        n= z*1.99*x;
       cout<<"Amount of interest:"<<n<<endl; 
       m=(x+n)/(x*12);
       cout<<"Monthly payment:"<<m<<endl; 
       }
     else if(x>=4&&model=='A')   
     {
       z= 1385000*(y/100);
       cout<<"Financing amount:"<<z<<endl;  
        n= z*2.09*x;
       cout<<"Amount of interest:"<<n<<endl; 
       m=(x+n)/(x*12);
       cout<<"Monthly payment:"<<m<<endl; 
       }
      else if(x<4&&model=='B')
       {z= 511500*(y/100);
       cout<<"Financing amount:"<<z<<endl;  
        n= z*1.69*x;
       cout<<"Amount of interest:"<<n<<endl; 
       m=(x+n)/(x*12);
       cout<<"Monthly payment:"<<m<<endl;}
      else if(x>=4&&model=='B')    
      { z= 511500*(y/100);
       cout<<"Financing amount:"<<z<<endl;  
        n= z*1.79*x;
       cout<<"Amount of interest:"<<n<<endl; 
       m=(x+n)/(x*12);
       cout<<"Monthly payment:"<<m<<endl;}
      else if(x<4&&model=='J')    
     {  z= 694000*(y/100);
       cout<<"Financing amount:"<<z<<endl;   n= z*1.89*x;
       cout<<"Amount of interest:"<<n<<endl; m=(x+n)/(x*12);
       cout<<"Monthly payment:"<<m<<endl;}
     else if(x>=4&&model=='J')    
      { z= 694000*(y/100);
       cout<<"Financing amount:"<<z<<endl;   n= z*1.99*x;
       cout<<"Amount of interest:"<<n<<endl; m=(x+n)/(x*12);
       cout<<"Monthly payment:"<<m<<endl;}
   
   else(x>=7 || x<=0);
       {cout<<"Error!,number of years is not in range"<<endl;}
             
system("pause");
return 0;
}
       
