//5920502681 Charkrit pantuta
#include<iostream>
using namespace std;
int main()
{
    char x;
     float y,z,f,a,m,d;
    cout<<"-------Car lease calculator------- "<<endl;
    cout<<"Enter car model: ";
    cin>>x;
    cout<<"Enter number of year (1-6): ";
    cin>>y;
    if(y>6||y<1) 
    {
          cout<<"Error! number of year is not in range"<<endl;
    }
    cout<<"Enter percentage of down payment: ";
    cin>>z;
    
    
    
    
        if(x=='a'||x=='A')
        {
                  d=(2.09)/100;    
                  z=1385000*(z/100);
                  y=12*y;
                  
                  if(y<4)
                  {
                         d=d-(d*(0.1/100));  
                         f=1385000-z;
                         a=f*d*y;
                         m=(f+a)/y;      
                  }
                  else
                  {
                      f=1385000-z;
                  a=f*d*y;
                  m=(f+a)/y;
                  }
                  cout<<"financing amount: "<<f<<endl;
                  cout<<"Amount of interest: "<<a<<endl;
                  cout<<"Monthly payment: "<<m<<endl;
                          
        }
        else if(x=='B'||x=='b')
        {
                  d=(1.79/100);
                  z=511500*(z/100);
                  y=12*y;
                  
                  if(y<4)
                  {
                         d=d-(d*(0.1/100));
                         f=511500-z;
                         a=f*d*y;
                         m=(f+a)/y;    
                  }
                  else
                  {
                      f=511500-z;
                  a=f*d*y;
                  m=(f+a)/y;
                  }
                  cout<<"financing amount: "<<f<<endl;
                  cout<<"Amount of interest: "<<a<<endl;
                  cout<<"Monthly payment: "<<m<<endl;
                  }
                  else if(x=='c'||x=='C')
                  {
                      d=1.99/100;
                      z=738000*(z/100);
                      y=12*y;
                  
                  if(y<4)
                  {
                         d=d-(d*(0.1/100));
                         f=738000-z;
                         a=f*d*y;
                         m=(f+a)/y;    
                  }
                  else
                  {
                      f=738000-z;
                  a=f*d*y;
                  m=(f+a)/y;
                  }
                  cout<<"financing amount: "<<f<<endl;
                  cout<<"Amount of interest: "<<a<<endl;
                  cout<<"Monthly payment: "<<m<<endl; 
                   }
                   else if(x=='J'||x=='j')
                   {
                      d=1.99/100;
                      z=694000*(z/100);
                      y=12*y;
                  
                  if(y<4)
                  {
                         d=d-(d*(0.1/100));
                         f=694000-z;
                         a=f*d*y;
                         m=(f+a)/y;      
                  }
                  else
                  {
                      f=694000-z;
                  a=f*d*y;
                  m=(f+a)/y;
                  }
                  cout<<"financing amount: "<<f<<endl;
                  cout<<"Amount of interest: "<<a<<endl;
                  cout<<"Monthly payment: "<<m<<endl; 
                   }
                   
                         
                         system("pause");
                         return 0;
    
}    
