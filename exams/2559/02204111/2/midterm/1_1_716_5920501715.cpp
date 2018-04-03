//5920501715 Wisallaya Kiattikhunrat

#include<iostream>
using namespace std;
int main()
{
    char c;
    double y,p,f,a,m,b;
    cout<<"Enter car model : ";
    cin>>c;
    cout<<"Enter number of year(1-6) : ";
    cin>>y;
    
    if(y<=6)
    {
            cout<<"Enter percentage of down payment : ";
            cin>>p;
           if(c=='A')
           {
               if(y<4)
                      b=2.09-(0.1/100*2.09);
               else if(y<=6)
               b=2.09;
               f=1385000-1385000*(p/100);
           }
           if(c=='B')
           {
                     if(y<4)
                            b=1.79-(0.1/100*1.79);
                     else if(y<=6)
                            b=1.79;
                     f=511500-511500*(p/100);
           }
           if(c=='C')
           {
                     
                     if(y<4)
                            b=0.9*1.99;
                     else if(y<=6)
                            b=1.99;
                     f=738000-738000*(p/100);
           }
           if(c=='J')
           {
                     
                     if(y<4)
                            b=1.99-(0.1/100*1.99);
                     else if(y<=6)
                            b=1.99;
                     f=694000-694000*(p/100);
           }
           a=f*b*y;
    m=(f+a)/(12*y);
    cout<<"Financing amount : "<<f<<endl;
    cout<<"Amount of interest : "<<a<<endl;
    cout<<"Mountly patment : "<<m<<endl;
           
    }
    else
             cout<<"Error!, number of year is not in range"<<endl;
    

    system("pause");
    return 0;
}
