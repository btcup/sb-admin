//5920551534  Rapeephat Laklaem
#include<iostream>
using namespace std;
int main()
{
    char x,C,B;
    float a,b,d,z,m=1.99,n=738000,Financing,interest,payment,o=511500,p=1.79,q=1385000,r=2.09,s=694000,;
    cout<<"-------Car lease calculator----------"<<endl;
    cout<<"Enter car model : ";
    cin>>x;
    if(x=='C')
    {cout<<"Enter number of years (1-6): ";
     cin>>a;
     if(a>0&&a<4)
     {
     cout<<"Enter percentage of down payment: ";
     cin>>b;
     cout<<"-------------------------------------"<<endl;
     Financing = n*(b/100);
     cout<<"Financing amount : "<<Financing<<endl;
     z = ((m/100)-(0.1/100))*100;
     interest = Financing*(z/100)*a;
     cout<<"Amount of interest : "<<interest<<endl;
     d = a*12;
     payment = (Financing+interest)/d;
     cout<<"Monthly payment : "<<payment<<endl;
     }
     else if(a>=4&&a<7)
     { cout<<"Enter percentage of down payment: ";
     cin>>b;
     cout<<"-------------------------------------"<<endl;
     Financing = n*(b/100);
     cout<<"Financing amount : "<<Financing<<endl;
     interest = Financing*(m/100)*a;
     cout<<"Amount of interest : "<<interest<<endl;
     d = a*12;
     payment = (Financing+interest)/d;
     cout<<"Monthly payment : "<<payment<<endl;
     }
     else
     {cout<<"Error!,number of years is not in range"<<endl;
     }
    }
    if(x=='B')
    {cout<<"Enter number of years (1-6): ";
     cin>>a;
     if(a>0&&a<4)
     {
     cout<<"Enter percentage of down payment: ";
     cin>>b;
     cout<<"-------------------------------------"<<endl;
     Financing = o*(b/100);
     cout<<"Financing amount : "<<Financing<<endl;
     z = ((p/100)-(0.1/100))*100;
     interest = Financing*(z/100)*a;
     cout<<"Amount of interest : "<<interest<<endl;
     d = a*12;
     payment = (Financing+interest)/d;
     cout<<"Monthly payment : "<<payment<<endl;
     }
     else if(a>=4&&a<7)
     { cout<<"Enter percentage of down payment: ";
     cin>>b;
     cout<<"-------------------------------------"<<endl;
     Financing = o*(b/100);
     cout<<"Financing amount : "<<Financing<<endl;
     interest = Financing*(p/100)*a;
     cout<<"Amount of interest : "<<interest<<endl;
     d = a*12;
     payment = (Financing+interest)/d;
     cout<<"Monthly payment : "<<payment<<endl;
     }
     else
     {cout<<"Error!,number of years is not in range"<<endl;
     }
    }
   if (x=='A')
    {cout<<"Enter number of years (1-6): ";
     cin>>a;
     if(a>0&&a<4)
     {
     cout<<"Enter percentage of down payment: ";
     cin>>b;
     cout<<"-------------------------------------"<<endl;
     Financing = q*(b/100);
     cout<<"Financing amount : "<<Financing<<endl;
     z = ((r/100)-(0.1/100))*100;
     interest = Financing*(z/100)*a;
     cout<<"Amount of interest : "<<interest<<endl;
     d = a*12;
     payment = (Financing+interest)/a;
     cout<<"Monthly payment : "<<payment<<endl;
     }
     else if(a>=4&&a<7)
     { cout<<"Enter percentage of down payment: ";
     cin>>b;
     cout<<"-------------------------------------"<<endl;
     Financing = q*(b/100);
     cout<<"Financing amount : "<<Financing<<endl;
     interest = Financing*(r/100)*a;
     cout<<"Amount of interest : "<<interest<<endl;
     d = a*12;
     payment = (Financing+interest)/a;
     cout<<"Monthly payment : "<<payment<<endl;
     }
     else
     {cout<<"Error!,number of years is not in range"<<endl;
     }
    }
     if (x=='J')
    {cout<<"Enter number of years (1-6): ";
     cin>>a;
     if(a>0&&a<4)
     {
     cout<<"Enter percentage of down payment: ";
     cin>>b;
     cout<<"-------------------------------------"<<endl;
     Financing = s*(b/100);
     cout<<"Financing amount : "<<Financing<<endl;
     z = ((m/100)-(0.1/100))*100;
     interest = Financing*(z/100)*a;
     cout<<"Amount of interest : "<<interest<<endl;
     d = a*12;
     payment = (Financing+interest)/a;
     cout<<"Monthly payment : "<<payment<<endl;
     }
     else if(a>=4&&a<7)
     { cout<<"Enter percentage of down payment: ";
     cin>>b;
     cout<<"-------------------------------------"<<endl;
     Financing = s*(b/100);
     cout<<"Financing amount : "<<Financing<<endl;
     interest = Financing*(m/100)*a;
     cout<<"Amount of interest : "<<interest<<endl;
     d = a*12;
     payment = (Financing+interest)/a;
     cout<<"Monthly payment : "<<payment<<endl;
     }
     else
     {cout<<"Error!,number of years is not in range"<<endl;
     }
    }
     
system("pause");
return 0;
}
