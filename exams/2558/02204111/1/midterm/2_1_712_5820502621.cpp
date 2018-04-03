#include <iostream>
using namespace std;
int main()
{
  int k,z,h,j,e,a,c,l,m,s,t,g,v,n,y,d;
  float b;
  
  cout<<"Welcome to A-with-love coffee ! !"<<endl;
  cout<<"Enter your menu (E/A/L/C/M):  " ;
  cin>>k;
  
  cout<<"Enter size (S/T/G/V):  ";
  cin>>z;
 
  
  {
  if(k==e||k==a)
    {
        if(z==s)
        {z=40;
        }
        else if(z==t)
        {z=50;
        }
         else if(z==g)
        {z=60;
        }
         else 
        {z=70;
        }
    }
    else if(k==c||k==l)
    {
        if(z==s)
        {z=50;
        }
        else if(z==t)
        {z=60;
        }
         else if(z==g)
        {z=70;
        }
         else 
        {z=80;
        }
    }
   else if(k==m)
    {
        if(z==s)
        {z=60;
        }
        else if(z==t)
        {z=70;
        }
         else if(z==g)
        {z=80;
        }
         else 
        {z=90;
        }
    }
      }
     
      cout<<"How many cup:"; 
      cin>>h;
  
     
     
     while(j)
     {cout<<"Do you want other menu (Y/N):";
     cin>>j;
     j=n;
     break; 
     }
     
     cout<<"Are you a member(Y/N) :";
     cin>>b;
     cout<<"Total  "<<z<<"  baht";
     cout<<"Discount  "<<z<<"  baht"<<endl;
    
     if(b==y)
     {
           b=z*h*0.1 ;
          cout<<"Discount  "<<b<<"  baht"<<endl;
     
     }
     else
     {
         cout<<"Discount  0  baht"<<endl; 
     
     }
      cout<<"You pay "<<z-b<<" baht";
      cout<<"Thank you";
     
     
     
     
    
            
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
system("pause");
return 0;    
}
