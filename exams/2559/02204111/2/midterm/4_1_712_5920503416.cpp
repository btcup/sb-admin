//5920503416  Tinnapat Satitwat
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  char type;
  int x,y,ma,ml,money;
  float a,l,hl,ha;
   
  cout<<"Type of vehicle ((C)Car or (M)Motorcycle) : ";
  cin>>type;
  cout<<"Arrival time: ";
  cin>>a;
  cout<<"Leave time : ";
  cin>>l;
  x=a*100;  
  y=l*100;
  ha=x/100;
  hl=y/100;   
  ma=x%100;
  ml=y%100; 
  
 
  if(ml-ma>0)
  {
     cout<<(hl-ha)<<" house and "<<(ml-ma-1)<<" minutes"<<endl;        
   }
   else 
   {
        cout<<ceil(hl-ha-1)<<" house and "<<(60*1+ml-ma)<<" minutes"<<endl;
        
    }
    
    if(type=='C')
    {ceil(l-a);
                 if(ceil(l-a)<=2)
            {
               cout<<"you can not leave before arrival time.";
            }    
                 
           if(ceil(l-a)>2)
           {
                    money=ceil(l-a)-2;      
           }
           if(ceil(l-a)>=3||ceil(l-a)<=5)
           {
                money=money*30;
            }
            if(ceil(l-a)>=6||ceil(l-a)<=8)                     
             {
                money=(money)*50;
            }    
          if(ceil(l-a)>=8)                     
             {
                money=500;
            } 
                       
    }
            
            
            
            
            if(type=='M')
    { ceil(l-a);
            if(ceil(l-a)<=3)
            {
               cout<<"you can not leave before arrival time.";}
                 
           if(ceil(l-a)>=3)
           {
                    money=ceil(l-a)-3;      
           }
           if(ceil(l-a)>=4||ceil(l-a)<=7)
           {
                money=money*10;
            }
            if(ceil(l-a)>=7)                     
             {
                money=money*150;
            }    
           
            } 
           
                            }
            cout<<"you have to pay "<<money<<" bath"<<endl;
                     
 system("pause");
 return 0;   
}    
