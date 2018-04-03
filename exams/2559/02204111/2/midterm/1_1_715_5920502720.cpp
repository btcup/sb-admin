#include<iostream>  //5920502720 Nuttachar Pummarin 
using namespace std;
int main ()
{   
    char c;
    float a,b,n,vat,x,y,z;

    cout<<"------- Car lease calculator -------"<<endl;
    
    cout<<"Enter car model :";
    cin>>c;
    cout<<"Enter number of years (1-6) :";
    cin>>a;
    if (a>=1&&a<=6)
    {
    cout<<"Enter percentage of down payment:";
    cin>>b;
    cout<<"------------------------------------"<<endl;
    if (c=='A'||c=='a')
      { n=1385000;
       vat=0.0209;}
    else if (c=='B'||c=='b')
     {  n=511500;
       vat=0.0179;}
    else if (c=='C'||c=='c')
      { n=738000;
       vat=0.0199;}
    else if (c=='J'||c=='j')
     { n=694000;
      vat=0.0199;}
    
    if(a<4)
    vat=vat-0.00100;
    
    
    x=n-n*(b/100.00);
    y=x*vat*a;
    z=(x+y)/(a*12);
    cout<<"Financing amount :"<<x<<endl;
    cout<<"Amount of interest :"<<y<<endl;
    cout<<"Monthly payment :"<<z<<endl;
}
 else  cout<<"Error!, number of years is not in range "<<endl;
    
    
    system ("pause");
    return 0;
}
