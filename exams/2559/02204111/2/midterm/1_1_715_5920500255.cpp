//5920500255 Atcharaporn Yensuang
#include <iostream>
using namespace std;
int main ()
{
    int a,b,z;
    double d,c;
    char x;
    cout<<"------ Car lease calculator -----------"<<endl;
    cout<<"Enter car model: ";
    cin>>x;
    cout<<"Enter number of years (1-6):";
    cin>>a;
    if(a>6)
    cout<<"Error!, number of years is not in range"<<endl;
    else
    cout<<"Enter percentage of down payment:";
    cin>>b;
    cout<<"---------------------------------------"<<endl;
    if(x=='A')
    {
              if(a>=4&&a<6)
              {
                 z= 1385000-(b*1385000/100);
                 cout<<"Financing amount: "<<z<<endl;
                 d=z*2.09/100*a;
                 cout<<"Amount of interest:"<<d<<endl;   
                 c=(z+d)/(a*12);
                 cout<<"Monthly payment:"<<c<<endl;  
              }
              else if (a>0&&a<4)
              {
                 z= 1385000-(b*1385000/100);
                 cout<<"Financing amount: "<<z<<endl;
                 d=z*1.99/100*a;
                 cout<<"Amount of interest:"<<d<<endl;   
                 c=(z+d)/(a*12);
                 cout<<"Monthly payment:"<<c<<endl;  
              }
    }
    else if (x=='B')
    {
              if(a>=4&&a<6)
              {
                 z= 511500-(b*511500/100);
                 cout<<"Financing amount: "<<z<<endl;
                 d=z*1.79/100*a;
                 cout<<"Amount of interest:"<<d<<endl;   
                 c=(z+d)/(a*12);
                 cout<<"Monthly payment:"<<c<<endl;  
              }
              else if (a>0&&a<4)
              {
                 z= 511500-(b*511500/100);
                 cout<<"Financing amount: "<<z<<endl;
                 d=z*1.69/100*a;
                 cout<<"Amount of interest:"<<d<<endl;   
                 c=(z+d)/(a*12);
                 cout<<"Monthly payment:"<<c<<endl;  
              }
    } 
    else if(x=='C')         
    {
              if(a>=4&&a<6)
              {
                 z= 738000-(b*738000/100);
                 cout<<"Financing amount: "<<z<<endl;
                 d=z*1.99/100*a;
                 cout<<"Amount of interest:"<<d<<endl;   
                 c=(z+d)/(a*12);
                 cout<<"Monthly payment:"<<c<<endl;  
              }
              else if (a>0&&a<4)
              {
                 z= 738000-(b*738000/100);
                 cout<<"Financing amount: "<<z<<endl;
                 d=z*1.89/100*a;
                 cout<<"Amount of interest:"<<d<<endl;   
                 c=(z+d)/(a*12);
                 cout<<"Monthly payment:"<<c<<endl;  
              }
    }
    else if(x=='J') 
     {
              if(a>=4&&a<6)
              {
                 z= 694000-(b*694000/100);
                 cout<<"Financing amount: "<<z<<endl;
                 d=z*1.99/100*a;
                 cout<<"Amount of interest:"<<d<<endl;   
                 c=(z+d)/(a*12);
                 cout<<"Monthly payment:"<<c<<endl;  
              }
              else if (a>0&&a<4)
              {
                 z= 694000-(b*694000/100);
                 cout<<"Financing amount: "<<z<<endl;
                 d=z*1.89/100*a;
                 cout<<"Amount of interest:"<<d<<endl;   
                 c=(z+d)/(a*12);
                 cout<<"Monthly payment:"<<c<<endl;  
              }
    }    
system ("pause");
return 0;
}
