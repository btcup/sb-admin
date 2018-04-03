#include<iostream>
using namespace std;
int main()
{
     char floor,wall;
   float h,w,d,p,q,u,l;
 
    cout<<"Welcome to The Fantastic Tiles!!"<<endl;
    cout<<"Please enter room size in meter (H* W * D) :";
    cin>>h>>w>>d;
    
 
    
    
    cout<<"Please select floor tile... (A/B/C) :";
    cin>>floor;
    
    if(floor=='A'||floor=='a')
    {
         p=((w*d*10000)/(30*30));
    }
    
    else if (floor=='B'||floor=='b')
    {     p=((w*d*10000)/(45*45));
    }
    else
    {
         p=((w*d*10000)/(60*60));
}
    
    cout<<"Please select wall tile... (A/B/C) :";
    cin>>wall;
    
    
     if(wall=='A'||wall=='a')
    {
         q=((h*d*4*10000)/(20*20));
    }
    else if(wall=='B'||wall=='b')
    {
         q=((h*d*4*10000)/(20*30));
    }
    if(wall=='C'||wall=='c')
    {
         q=((h*d*4*10000)/(30*30));
    }
    
     if(floor=='A'||floor=='a')
    {
         u=55;
    }
    
    else if (floor=='B'||floor=='b')
    {     u=80;
    }
    else
    {
        u=90;
}
    
    
    
    
     if(wall=='A'||wall=='a')
    {
         u=17;
    }
    else if(wall=='B'||wall=='b')
    {
        u=32;
    }
    if(wall=='C'||wall=='c')
    {
         u=50;
    }
    
    
   
    cout<<"------------------------------"<<endl;
    
    cout<<"Number of floor tiles:"<<p<<"--> Price = " << p*u<<endl ;
    cout<<"Number of floor tiles:"<<q<<"--> Price = " << q*u <<endl;
    l=p*u + q*u;
    cout<<"Total Price :"<< (p*u)<<" + "<< (q*u)<<"="<<l<<endl;
    
    
    
    
    
system("pause");
return 0;
}
