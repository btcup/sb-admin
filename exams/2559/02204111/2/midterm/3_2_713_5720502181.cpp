//5720502181 Sorawit    Thongduang
#include<iostream>
using namespace std;
int main()
{
    float a,c;
    int b,d,e;
    int i=0;
    do
    { cout<<"Enter electricity cost per unit (baths) : ";
      cin>>a;
    }while(a<0);
    cout<<"Enter last unit : ";
    cin>>b;
    c=float(b)/100000;
    if(c<1&&c>0)
    { cout<<"Enter current unit : ";
      cin>>d;
      if(d>b)
      {
             cout<<"Units used = "<<d-b<<endl;}
    }
    else 
    {cout<<"Invalid last unit!"<<endl;} 
    
     system("pause") ;
   return 0;
}
      
    
