//5920501316 Ketsinee Phanphlab
#include<iostream>
using namespace std;
int main()
{
    double a,b,c,d,x;
    cout<<"Enter electricity cost per unit (bahts):";
    cin>>a;
    cout<<"Enter last unit :";
    cin>>b;
    cout<<"Enter current unit :";
    cin>>c;
    
    do
   {
           if(a>=0)
           {
           d=c-b;
           cout<<"Units used:"<<d<<endl;
           x=a*d;
           cout<<"electricity charge (bahts)= "<<x;
          
            break;
           }
         
    
   }
    while (a<0);  
     
    
    
    
    
       
    system("pause");
    return 0;
    
}
