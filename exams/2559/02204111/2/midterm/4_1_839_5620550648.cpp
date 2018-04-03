//MR.Pubeth Lertnantakul 5620550648 832_839

#include <iostream>
using namespace std;
int main()
{
    char x;
    double arrival,leave,total;
    int hour,min,a,pay,c=0;
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";cin>>x;
    if(x=='C'||x=='M')
    {
    cout<<"Arrival time : ";cin>>arrival;
    cout<<"Leave time : ";cin>>leave;
    cout<<endl;
    total=(leave-arrival);
    if(total>0)
    {
               if(total-int(total)>0.6)
               {
               a=total*100;
               min=a%60;
               hour=(a-min)/100;
               }
               else
               {
               hour=total*100/100;
               min=(total-hour)*100;
               } 
    cout<<hour<<" hours and "<<min<<" minutes"<<endl;
    if(x=='C')
       {
              if(hour<2)
              pay=0;
              else if(hour>=2&&hour<5)
              pay=30;
              else if(hour<8)
              pay=50;
              else if(hour>=8)
              c=500;
       }
    else if(x=='M')
       {
                   if(hour<3)
                   pay=0;
                   else if(hour>=4&&hour<7)
                   pay=10;
                   else if(hour>=7)
                   c=150;
       }   
       if(x=='C'&&hour<8&&min>0)
       {
       hour++;
       c=pay*hour;
       }
       else if(x=='M'&&hour<7&&min>0)
       {
       hour++;
       c=pay*hour;
       }
    cout<<"You have to pay "<<c<<" baht"<<endl;
    }
    else
    cout<<"You can't leave before arrival time."<<endl;
    }
    system("pause");
    return 0;
}
