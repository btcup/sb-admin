//5720550534 Phattadon khathawutcharakun
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
char a;
float b,c,x;
int y,sum;
   cout<<"Type of vehicle ((C)Car or (M)Motorcycle):";
   cin>>a;
   cout<<"Arrival time :";
   cin>>b;
   cout<<"Leave time :";
   cin>>c;


   if(a=='c')
   {         
             x=c-b;
             y=abs((c-int(c))-(b-int(b)))*100;
             
             if(x>0&&x<=2)
             {
             cout<<x<<"hours and "<<y<<"minutes"<<endl;
             cout<<"You have to pay 0 bath";
             }
             else if(x>=3&&x<=5)
             {
             cout<<x<<"hours and "<<y<<"minutes"<<endl;
             cout<<"You have to pay"<<(x-2)*30<< "bath";
              }
              else if(x>=6&&x<=8)
             {
             cout<<x<<"hours and "<<y<<"minutes"<<endl;
             cout<<"You have to pay"<<((x-2)*30)+((x-5)*30)<< "bath";
              }
              else if(x>8)
             {
             cout<<x<<"hours and "<<y<<"minutes"<<endl;
             cout<<"You have to pay 500 bath";
              }
              else if(x<=0)
             {
             cout<<"You can't leave before arrival time";
              }
}
 if(a=='m')
   {         
             x=c-b;
             y=abs((c-int(c))-(b-int(b)))*100;
             if(x>0&&x<=3)
             {
             cout<<x<<"hours and "<<y<<"minutes"<<endl;
             cout<<"You have to pay 0 bath";
             }
             else if(x>=4&&x<=7)
             {
             cout<<x<<"hours and "<<y<<"minutes"<<endl;
             cout<<"You have to pay"<<(x-2)*30<< "bath";
              }
              else if(x>7)
             {
             cout<<x<<"hours and "<<y<<"minutes"<<endl;
             cout<<"You have to pay 150 bath";
              }
              else if(x<=0)
             {
             cout<<"You can't leave before arrival time";
              }
}
    
system("pause");
return 0;
}
