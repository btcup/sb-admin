//5920503912 ittipat juronpruk
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,x1,x2,d,e;
    cout<<"Enter corefficinents a, b and c:";
    cin>>a>>b>>c;
    
    cout<<"Roots are real and differents.";
    cout<<endl;
    
    if((pow(b,2)-4*a*c)!=0&&(pow(b,2)-4*a*c)>0)
    {
       x1= -b/(a*2)+((sqrt(pow(b,2)-4*a*c)))/(a*2);         
       x2= -b/(a*2)-((sqrt(pow(b,2)-4*a*c)))/(a*2);
       
       cout<<"x1"<<"="<<' '<<x1 <<endl;           
       cout<<"x2"<<"="<<' '<<x2 <<endl;
}
   if((pow(b,2)-4*a*c)==0)
   { 
        x2= -b/(a*2)+((sqrt(pow(b,2)-4*a*c)))/(a*2);
        x1=x2;
        
        cout<<"x1"<<"="<<"x2"<<"="<<' '<<x1<<endl;
   }
   
if((pow(b,2)-4*a*c)<0)
      {
        x1=-b/(a*2);
        d=((sqrt(-pow(b,2)+4*a*c)))/(a*2);    
        x1=-b/(a*2);
        e=((sqrt(-pow(b,2)+4*a*c)))/(a*2);
      cout<<"x1"<<"="<<x1<<"+"<<d<<endl;
      cout<<"x1"<<"="<<x1<<"-"<<e<<endl;
}
    
    
    
    
    
    
    
    
    
    system ("pause");
    return 0;
}
