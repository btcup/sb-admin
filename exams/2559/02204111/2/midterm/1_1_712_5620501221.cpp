#include<iostream>  
using namespace std; //5620501221 Anchisa Tanompong
int main()
{
    cout<<"-------Car Lease calculator-------"<<endl;
    char car;
    cout<<"Enter car model : ";
    cin>>car;
    int x,y;
    double n,m,o;
    
    if (car=='A'||car=='B'||car=='C'||car=='J')
       {
        cout<<"Enter number of year (1-6) : ";
        cin>>x;
       }
           {
             if(x>=1&&x<4)
             {
              cout<<"Enter percentage of down payment : ";
              cin>>y;
             }
             else if (x>=4&&x<6) 
             {
              cout<<"Enter percentage of down payment : ";
              cin>>y;
             }
             else
             {
              cout<<"Error!, number of years is not in range "<<endl;
             }
           }
            cout<<"----------------------------------"<<endl;
           {
               if (car=='A')
               {
                    if (x>=1&&x<4)
                    {
                        cout<<"Financing amount : "<<n<<endl;
                        n = 1385000-(y*100);
                        cout<<"Amoumt of interest : "<<m<<endl;
                        m = n*((2.09-0.1)*100)*x;
                        cout<<"Monthly payment : "<<o<<endl;
                        o = (n+m)/(x*12);
                    } 
                    if (x>=4&&x<6)
                    {
                        cout<<"Financing amount : "<<n<<endl;
                        n = 1385000-(y*100);
                        cout<<"Amoumt of interest : "<<m<<endl;
                        m = n*(2.09*100)*x;
                        cout<<"Monthly payment : "<<o<<endl;
                        o = (n+m)/(x*12);
                    } 
               }
               else if (car=='B')
               {
                    if (x>=1&&x<4)
                    {
                        cout<<"Financing amount : "<<n<<endl;
                        n = 511500-(y*100);
                        cout<<"Amoumt of interest : "<<m<<endl;
                        m = n*((1.79-0.1)*100)*x;
                        cout<<"Monthly payment : "<<o<<endl;
                        o = (n+m)/(x*12);
                    } 
                    if (x>=4&&x<6)
                    {
                        cout<<"Financing amount : "<<n<<endl;
                        n = 511500-(y*100);
                        cout<<"Amoumt of interest : "<<m<<endl;
                        m = n*(1.79*100)*x;
                        cout<<"Monthly payment : "<<o<<endl;
                        o = (n+m)/(x*12);
                    } 
               }
               else if (car=='C')
               {
                    if (x>=1&&x<4)
                    {
                        cout<<"Financing amount : "<<n<<endl;
                        n = 738000-(y*100);
                        cout<<"Amoumt of interest : "<<m<<endl;
                        m = n*((1.99-0.1)*100)*x;
                        cout<<"Monthly payment : "<<o<<endl;
                        o = (n+m)/(x*12);
                    } 
                    if (x>=4&&x<6)
                    {
                        cout<<"Financing amount : "<<n<<endl;
                        n = 738000-(y*100);
                        cout<<"Amoumt of interest : "<<m<<endl;
                        m = n*(1.79*100)*x;
                        cout<<"Monthly payment : "<<o<<endl;
                        o = (n+m)/(x*12);
                    } 
               }
               else if (car=='J')
               {
                    if (x>=1&&x<4)
                    {
                        cout<<"Financing amount : "<<n<<endl;
                        n = 694000-(y*100);
                        cout<<"Amoumt of interest : "<<m<<endl;
                        m = n*((1.99-0.1)*100)*x;
                        cout<<"Monthly payment : "<<o<<endl;
                        o = (n+m)/(x*12);
                    } 
                    if (x>=4&&x<6)
                    {
                        cout<<"Financing amount : "<<n<<endl;
                        n = 694000-(y*100);
                        cout<<"Amoumt of interest : "<<m<<endl;
                        m = n*(1.79*100)*x;
                        cout<<"Monthly payment : "<<o<<endl;
                        o = (n+m)/(x*12);
                    } 
               }
           }
      
system("pause");
return 0;
}
