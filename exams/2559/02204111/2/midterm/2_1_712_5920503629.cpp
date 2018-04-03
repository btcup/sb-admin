#include<iostream>    //5920503629 Hachim Sungo
#include<cmath>
using namespace std;
int main()
{
    float n,s,x,y;
    char model;
    cout<<"-----------------Car lease calculator------------------------"<<endl;
    cout<<"Enter car model:";
    cin>>model;
    cout<<"Enter number of years (1-6):";
    cin>>n;
    cout<<"Enter your salary :";
    cin>>s;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Financing amount:";
    if(model=='C')
    {x=((738000-(738000*25))/100);
     y=((738000*1.99)/100);}
    else if(model=='A')
    {x=(1385000-(1385000*25)/100);
     y=((1385000*2.09)/100) ;     }
    else if(model=='B')
    {x=(511500-(511500*25)/100);
     y= ((511500*1.79)/100);}
    else if(model=='J')
    {x=(694000-(694000*25)/100);
     y=((694000*1.99)/100);}
    cout<<x;
    cout<<"Amount of interest:";
    cout<<x*y*n;
    cout<<"Monthly payment:";
    cout<<(x+(x*y*n))/s;
    if((x+(x*y*n))/s>=s/2)
    {cout<<"The monthly pament is over than 50persent of your salary";}
    else
    {cout<<"Good decision,Enjoy your car";}
    
    
    
    
    
    
    
    
    
    
    
    
    
  
  
  
    return 0;
    system ("pause");
}
