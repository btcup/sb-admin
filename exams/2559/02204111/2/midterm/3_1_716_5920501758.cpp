//5920501758 Sukanya Fendy
#include<iostream>
using namespace std;
int main()
{
   float arrive,leave,h,m;
   float p;
   cout<<"Arrival time : ";
   cin>>arrive;
   cout<<"Leave time : ";
   cin>>leave;
   if (arrive<=leave)
{
   h=int(leave-arrive);
   m=int((leave-arrive)*100)%100;
   if(m>=60)
    {
            cout<<h<<" hours and "<<m-40<<endl;
            if(h<=3) p=0;
            else if(h>3&&h<=6) p=h*20;
            else if(h>6&&h<=8) p=h*50;
            else p=500;
    }
   else 
   {
        cout<<h<<" hours and "<<m<<endl;
        if(h<=3) p=0;
        else if(h>3&&h<=6) p=h*20;
        else if(h>6&&h<=8) p=h*50;
        else p=500;
   }
   cout<<"You have to pay "<<p<<" bath"<<endl;
}
   else
     cout<<"You can't leave before arrival time"<<endl;
system("pause");
return 0;   
    
}
