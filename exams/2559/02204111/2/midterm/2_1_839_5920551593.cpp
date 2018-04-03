//5920551593 Sirothon Chumthong
#include <iostream>
using namespace std;
int main ()
{
    char x;
    int a,b,c,d,e,f;
    float y,z,i;
    c=138500;
    d=511500;
    e=738000;
    f=694000;
       
    cout<<"Enter car model :";
    cin>>x;
    if (x=='A')
    {
               cout<<"Enter number of years (1-6):";
               cin>>a;
               if (a>0)
               {
                       cout<<"Enter your salary:";
                       cin>>b;
                       y=c-(b/2.5);
                       z=y*2.09*a;
                       i=(y+z)/(12*a);
                       if(i>(b/2))
                       {
                                  cout<<"The Monthly payment is over than50% of your salary!";
                                  }
                       else 
                       {
                            cout<<"Good decision,enjoy your new car";
                            }
    if (x=='B')
    {
               cout<<"Enter number of years (1-6):";
               cin>>a;
               if (a>0)
               {
                       cout<<"Enter your salary:";
                       cin>>b;
                       y=d-(b/2.5);
                       z=y*1.79*a;
                       i=(y+z)/(12*a);
                       if(i>(b/2))
                       {
                                  cout<<"The Monthly payment is over than50% of your salary!";
                                  }
                       else 
                       {
                            cout<<"Good decision,enjoy your new car";
                            }
   if (x=='C')
   {   
              cout<<"Enter number of years (1-6):";
               cin>>a;
               if (a>0)
               {
                       cout<<"Enter your salary:";
                       cin>>b;
                       y=e-(b/2.5);
                       z=y*1.99*a;
                       i=(y+z)/(12*a);
                       if(i>(b/2))
                       {
                                  cout<<"The Monthly payment is over than50% of your salary!";
                                  }
                       else 
                       {
                            cout<<"Good decision,enjoy your new car";
                            }               
   if(x=='J')
   {
             cout<<"Enter number of years (1-6):";
               cin>>a;
               if (a>0)
               {
                       cout<<"Enter your salary:";
                       cin>>b;
                       y=f-(b/2.5);
                       z=y*1.99*a;
                       i=(y+z)/(12*a);
                       if(i>(b/2))
                       {
                                  cout<<"The Monthly payment is over than50% of your salary!";
                                  }
                       else 
                       {
                            cout<<"Good decision,enjoy your new car";
                            }
   system("pause");
   return 0;
}


   
                       
                            
                            
                            

                       
    
