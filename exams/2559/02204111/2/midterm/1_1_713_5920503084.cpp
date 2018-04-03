//5920503084 name : nuttakan Tankeaw 
#include <iostream>
using namespace std;
int main()
{
    int year,percen_down,a,b,c,j,x,y,z,w,p,k,x1,y1,z1,w1;
    char model;
    a=1385000;
    b=511500;
    c=738000;
    j=694000;
    x1=2.09/100;
    y1=1.79/100;
    z1=1.99/100;
    p=percen_down/100;
    x=a-(a*p);
    y=b-(b*p);
    z=c-(c*p);
    w=j-(c*p);
    k=12*year;
    
    cout<<"------------------ Car lease calculator---------------"<<endl;
    cout<<"Enter car model :";
    cin>>model;
    cout<<"Enter number of year(1-6) :";
    cin>>year;
    
    if(year>0&&year<=4)
    {
        cout<<"Enter percentage of down payment :";
        cin>>percen_down;
        cout<<"--------------------------------------------------"<<endl;
        
               if(model=='A')
            {
              cout<<"Financing amount :"<<x<<endl;
              cout<<"Amount of interest:"<<x*x1-(0.1/100)*year<<endl;
              cout<<"Montly payment:"<<x+(x*x1-(0.1/100)*year)/k<<endl;
            }
               else if(model=='B')
            {
               cout<<"Financing amount :"<<y<<endl;
               cout<<"Amount of interest:"<<y*y1-(0.1/100)*year<<endl;
               cout<<"Montly payment:"<<y+y*((1.79-0.1)/100)*year/k<<endl;
            }
               else if(model=='C')
           {
               cout<<"Financing amount :"<<z<<endl;
               cout<<"Amount of interest:"<<z*z1-(0.1/100)*year<<endl;
               cout<<"Montly payment:"<<z+z*((1.99-0.1)/100)*year/k<<endl;
           }
              else if(model=='J')
           {
              cout<<"Financing amount :"<<w<<endl;
              cout<<"Amount of interest:"<<w*z1-(0.1/100)*year<<endl;
              cout<<"Montly payment:"<<w+w*((1.99-0.1)/100)*year/k<<endl;
           }
    }
    else if (year>4&&year<=6)
    {
       cout<<"Enter percentage of down payment :";
       cin>>percen_down; 
       cout<<"----------------------------------------------"<<endl;
        
               if(model=='A')
            {
              cout<<"Financing amount :"<<x<<endl;
              cout<<"Amount of interest:"<<x*x1*year<<endl;
              cout<<"Montly payment:"<<x+x*x1*year/k<<endl;
            }
               else if(model=='B')
            {
               cout<<"Financing amount :"<<y<<endl;
               cout<<"Amount of interest:"<<y*y1*year<<endl;
               cout<<"Montly payment:"<<y+y*y1*year/k<<endl;
            }
               else if(model=='C')
           {
               cout<<"Financing amount :"<<z<<endl;
               cout<<"Amount of interest:"<<z*y1*year<<endl;
               cout<<"Montly payment:"<<z+z*y1*year/k<<endl;
           }
              else if(model=='J')
           {
              cout<<"Financing amount :"<<w<<endl;
              cout<<"Amount of interest:"<<w*y1*year<<endl;
              cout<<"Montly payment:"<<w+w*y1*year/k<<endl;
           }               
    }
    else
    cout<<"Error!,number of year is not in range";
                        
    system("pause");
    return 0;
}
