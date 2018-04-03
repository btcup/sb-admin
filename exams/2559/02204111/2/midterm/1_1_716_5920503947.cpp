//5920503947 Kansinee Phongphun
#include <iostream>
using namespace std;
int main()
{
    double d,y,p,f,a,m;
    char model;
    cout<<"Enter car model:";
    cin>>model;
    cout<<"Enter number of years (1-6):";
    cin>>y;
    if(y<=6)
    {
            cout<<"Enter percentage of down payment:";
            cin>>d;
            if(y<4)
            {
                    if(model=='A'||model=='a')
                    {
                     p=1385000;                      
                     f=p-(p*(d/100));
                     a=p-(f*2.10*y/12);
                     m=(f+a)/(y*12);                   
                    }
                    else if(model=='B'||model=='b')
                    {
                     p=511500;                      
                     f=p-(p*(d/100));
                     a=p-((p-f)*1.80*y);
                     m=(f+a)/(y*12);                   
                    }
                    else if(model=='C'||model=='c')
                    {
                      p=738000;
                      f=p-(p*(d/100));
                      a=(f*2.00*y/12);
                      m=(f+a)/(y*12);  
                    }
                    else if(model=='J'||model=='j')
                    {
                      p=694000;
                      f=p-(p*(d/100));
                      a=f*2.00*y;
                      m=(f+a)/(y*12);
                    }
                    
            }
            if(y>=4&&y<=6)
            {
                     if(model=='A'||model=='a') 
                     {
                       p=1385000;
                       f=p-(p*(d/100));
                       a=p+(f*2.09*y);
                       m=(f+a)/(12*y);                         
                     }
                     else if(model=='B'||model=='b')
                     {
                        p=511500;
                        f=p-(p*(d/100));
                        a=(f*1.79*y)/p;
                        m=(f+a)/(y*12);
                     } 
                     else if(model=='C'||model=='c')
                     {
                        p=738000;
                        f=p-(p*(d/100));
                        a=f*1.99*y;
                        m=(f+a)/(y*12);
                     }
                     else if(model=='J'||model=='j')
                     {
                        p=694000;
                        f=p-(p*(d/100));
                        a=f*1.99*y;
                        m=(f+a)/(y*12); 
                     }                          
            }
            cout<<"Financing amount:"<<f<<endl;
            cout<<"Amonth of interest:"<<a<<endl;
            cout<<"Monthly payment :"<<m<<endl;
    }
    else
    cout<<"Error!,number of years is not in range"<<endl;
    system ("pause");
    return 0;
}
