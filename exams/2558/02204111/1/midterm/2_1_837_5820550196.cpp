#include <iostream>
using namespace std;
int main ()
{
    int h,x,pay,tot=0,dis=0;
    char n,z,d,b;
    cout<<"Welcome to A Cup-with-love Coffee!! "<<endl;
    do
    {
        cout<<"Enter your menu (E/A/L/C/M): ";
        cin>>n;
        cout<<"Enter size (S/T/G/V): ";
        cin>>z;
        cout<<"How many cups ? : ";
        cin>>h;
        if(n=='E'||n=='e')
        {  if(z=='s'||z=='S')
           { x = 40; 
           pay = x*h;}
           else if(z=='t'||z=='T')
           { x = 50; 
           pay = x*h;}
           else if(z=='g'||z=='G')
           { x = 60; 
           pay = x*h;}
           else if(z=='v'||z=='V')
           { x = 70; 
           pay = x*h;}
           tot = tot + pay;
        }
        if(n=='A'||n=='a')
        {  if(z=='s'||z=='S')
           { x = 40; 
           pay = x*h;}
           else if(z=='t'||z=='T')
           { x = 50; 
           pay = x*h;}
           else if(z=='g'||z=='G')
           { x = 60; 
           pay = x*h;}
           else if(z=='v'||z=='V')
           { x = 70; 
           pay = x*h;}
           tot = tot + pay;
        }
        if(n=='C'||n=='c')
        {  if(z=='s'||z=='S')
           { x = 50; 
           pay = x*h;}
           else if(z=='t'||z=='T')
           { x = 60; 
           pay = x*h;}
           else if(z=='g'||z=='G')
           { x = 70; 
           pay = x*h;}
           else if(z=='v'||z=='V')
           { x = 80; 
           pay = x*h;}
           tot = tot + pay;
        }
        if(n=='L'||n=='l')
        {  if(z=='s'||z=='S')
           { x = 50; 
           pay = x*h;}
           else if(z=='t'||z=='T')
           { x = 60; 
           pay = x*h;}
           else if(z=='g'||z=='G')
           { x = 70; 
           pay = x*h;}
           else if(z=='v'||z=='V')
           { x = 80; 
           pay = x*h;}
           tot = tot + pay;
        }
        if(n=='M'||n=='m')
        {  if(z=='s'||z=='S')
           { x = 60; 
           pay = x*h;}
           else if(z=='t'||z=='T')
           { x = 70; 
           pay = x*h;}
           else if(z=='g'||z=='G')
           { x = 80; 
            pay = x*h;}
           else if(z=='v'||z=='V')
           { x = 90; 
             pay = x*h;}
             tot = tot + pay;
        }
        cout<<"do you want other menu ? (Y/N) : ";
        cin>>d;
        if(d=='N' || d=='n')
        { break;}
    }
    while(true);
    cout<<"Are you a member ? (Y/N) : ";
    cin>>b;
    cout<<"Total "<<tot<<" Baht"<<endl;
    if(b=='Y' || b=='y')
    { dis = tot/10; }
    cout<<"Discount "<<dis<<" Baht"<<endl;
    cout<<"You pay "<<tot-dis<<" Baht"<<endl;
    cout<<"Thank you."<<endl;    
    system ("pause");
    return 0;
}
