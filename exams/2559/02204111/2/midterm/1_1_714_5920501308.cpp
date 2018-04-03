#include<iostream>//5920501308 Arak  Nakprayoon
using namespace std;
int main()
{
    char m;
    int y,mon,d,a,z,f;
    float x,n,payment;
    cout<<"Enter car model: ";
    cin>>m;
    mon=12*y;
    if(m=='A')
    { 
             
              cout<<"Enter number of year: ";
                                    cin>>y;
                                    mon=y*12;
                                    if(y<4&&y!=0)
                                    {
                                    x=(2.19/100);
                                    z=1385000.0;
                                    cout<<"Enter percentade of down payment: ";
                                    cin>>d;
                                    a=(d*z)/100;//down payment
                                    f=z-a;//financing 
                                    n=f*x*y;//amount
                                    payment=(f+n)/mon;
                                    cout<<"-------------------------"<<endl;
                                    cout<<"Financing amount: "<<f<<endl;
                                    cout<<"Amount of interest: "<<n<<endl;
                                    cout<<"Monthly payment: "<<payment<<endl;
                                    }
                                    else if(y>=4&&y<6)
                                    
                                    {
                                         x=(2.09/100);
                                         z=694000.0;
                                         cout<<"Enter percentade of down payment: ";
                                    cin>>d;
                                    a=(d/100)*z;
                                    f=z-a;
                                    n=f*x*y;
                                    payment=(f+n)/mon;
                                    cout<<"-------------------------"<<endl;
                                    cout<<"Financing amount: "<<f<<endl;
                                    cout<<"Amount of interest: "<<n<<endl;
                                    cout<<"Monthly payment: "<<payment<<endl;
                                    }
                                    else 
                                    cout<<"Error!!,number of year is not rage"<<endl;
    }
                                   
    else if(m=='B')
    { 
              
              cout<<"Enter number of year: ";
                                    cin>>y;
                                    mon=y*12;
                                    if(y<4&&y!=0)
                                    {
                                    x=(1.89/100);
                                    z=511500.0;
                                    cout<<"Enter percentade of down payment: ";
                                    cin>>d;
                                    a=(d*z)/100;
                                    f=z-a;
                                    n=f*x*y;
                                    payment=(f+n)/mon;
                                    cout<<"-------------------------"<<endl;
                                    cout<<"Financing amount: "<<f<<endl;
                                    cout<<"Amount of interest: "<<n<<endl;
                                    cout<<"Monthly payment: "<<payment<<endl;
                                    }
                                    else if(y>=4&&y<6)
                                    
                                    {
                                         x=(1.79/100);
                                         z=694000.0;
                                         cout<<"Enter percentade of down payment: ";
                                    cin>>d;
                                    a=(d/100)*z;
                                    f=z-a;
                                    n=f*x*y;
                                    payment=(f+n)/mon;
                                    cout<<"-------------------------"<<endl;
                                    cout<<"Financing amount: "<<f<<endl;
                                    cout<<"Amount of interest: "<<n<<endl;
                                    cout<<"Monthly payment: "<<payment<<endl;
                                    }
                                    else 
                                    cout<<"Error!!,number of year is not rage"<<endl;
                                    }
    else if(m=='C')
    { 
             
              cout<<"Enter number of year: ";
                                    cin>>y;
                                    mon=y*12;
                                    if(y<4&&y!=0)
                                    {
                                    x=(2.09/100);
                                    z=738000.0;
                                    cout<<"Enter percentade of down payment: ";
                                    cin>>d;
                                    a=(d*z)/100;
                                    f=z-a;
                                    n=f*x*y;
                                    payment=(f+n)/mon;
                                    cout<<"-------------------------"<<endl;
                                    cout<<"Financing amount: "<<f<<endl;
                                    cout<<"Amount of interest: "<<n<<endl;
                                    cout<<"Monthly payment: "<<payment<<endl;
                                    }
                                    else if(y>=4&&y<6)
                                    
                                    {
                                         x=(1.99/100);
                                         z=694000.0;
                                         cout<<"Enter percentade of down payment: ";
                                    cin>>d;
                                    a=(d/100)*z;
                                    f=z-a;
                                    n=f*x*y;
                                    payment=(f+n)/mon;
                                    cout<<"-------------------------"<<endl;
                                    cout<<"Financing amount: "<<f<<endl;
                                    cout<<"Amount of interest: "<<n<<endl;
                                    cout<<"Monthly payment: "<<payment<<endl;
                                    }
                                    else 
                                    cout<<"Error!!,number of year is not rage"<<endl;
                                    }
    else if(m=='J')
    { 
             
              cout<<"Enter number of year: ";
                                    cin>>y;
                                    mon=y*12;
                                    if(y<4&&y!=0)
                                    {
                                    x=(2.09/100);
                                    z=694000.0;
                                    cout<<"Enter percentade of down payment: ";
                                    cin>>d;
                                    a=(d*z)/100;
                                    f=z-a;
                                    n=f*x*y;
                                    payment=(f+n)/mon;
                                    cout<<"-------------------------"<<endl;
                                    cout<<"Financing amount: "<<f<<endl;
                                    cout<<"Amount of interest: "<<n<<endl;
                                    cout<<"Monthly payment: "<<payment<<endl;
                                    }
                                    else if(y>=4&&y<6)
                                    
                                    {
                                         x=(1.99/100);
                                         z=694000.0;
                                         cout<<"Enter percentade of down payment: ";
                                    cin>>d;
                                    a=(d/100)*z;
                                    f=z-a;
                                    n=f*x*y;
                                    payment=(f+n)/mon;
                                    cout<<"-------------------------"<<endl;
                                    cout<<"Financing amount: "<<f<<endl;
                                    cout<<"Amount of interest: "<<n<<endl;
                                    cout<<"Monthly payment: "<<payment<<endl;
                                    }
                                    else 
                                    cout<<"Error!!,number of year is not rage"<<endl;
                                    }
    system("pause");
    return 0;
}
