#include<iostream>  //5720500146 Thanakorn Norasing
using namespace std;
int main()
{
    float a,b; //a=years,b=down peyment
    double x,y,z; //x=Financing.y=Amount of interest,z=Monthly payment
    char model;
    cout<<"------- Car lease calculator -------"<<endl;
    cout<<"Enter car model: ";
    cin>>model;
    if(model=='A'||model=='B'||model=='C'||model=='J')
    {
        cout<<"Enter number of years (1-6): ";
        cin>>a;
        if(a>=1&&a<=6)
           {
                      cout<<"Enter percenyage of down payment: ";
                      cin>>b;
                      cout<<"------------------------------------"<<endl;
                      if(a>=4&&a<=6)
                      {
                                   if(model=='A')
                                   {
                                                 x=1385000-(1385000*(b/100));
                                                 y=(x*a)*(2.09/100);
                                   }
                                   if(model=='B')
                                   {
                                                 x=511500-(511500*(b/100));
                                                 y=(x*a)*(1.79/100);               
                                   }
                                   if(model=='C')
                                   {
                                                 x=738000-(738000*(b/100));
                                                 y=(x*a)*(1.99/100);
                                   }
                                   if(model=='J')
                                   {
                                                 x=694000-(694000*(b/100));
                                                 y=(x*a)*(1.99/100);                                               
                                   }
                                        
                      }
                      if(a>=1&&a<4)
                      {
                                   if(model=='A')
                                   {
                                                  x=1385000-(1385000*(b/100));
                                                 y=(x*a)*(1.99/100);
                                   }
                                   if(model=='B')
                                   {
                                                 x=511500-(511500*(b/100));
                                                 y=(x*a)*(1.69/100);               
                                   }
                                   if(model=='C')
                                   {
                                                 x=738000-(738000*(b/100));
                                                 y=(x*a)*(1.89/100);
                                   }
                                   if(model=='J')
                                   {
                                                 x=694000-(694000*(b/100));
                                                 y=(x*a)*(1.89/100);                                               
                                   }
                                        
                      }
                      z=(x+y)/(a*12);
                      cout<<"Financng amount: "<<x<<endl;
                      cout<<"Amount of interest: "<<y<<endl;
                      cout<<"Monthly payment: "<<z<<endl;
           }
           else
             cout<<"Error!,number of year is not in range."<<endl;
        }
        else
        cout<<"Error!,Car model is not in range."<<endl;
                                                 
    
    
    system("pause");
    return 0;
}
