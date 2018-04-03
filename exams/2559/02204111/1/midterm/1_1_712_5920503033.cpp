// 5920503033 Kanitta Jetchamnong
#include <iostream>
using namespace std;
int main()
{
    float x,y,z,c,sum;
    cout<<"Enter n, a and d : ";
    cin>>x>>y>>z;
    
    
  
   if(x>0&&y>0&&z!=0)
   {
    cout<<"The arithmetic progression of n="<<x<<", a="<<y<<", d="<<z<<" : ";
    
   }
    
   else if(x<=0)
    cout<<"n can't be both a negative integer and zero"<<endl;
   else if(y=0)
    cout<<"a can't be zero"<<endl;
   else if(z=0)
    cout<<"d can't be zero"<<endl;
   else 
    cout<<"n can't be both a negative integer and zero"<<endl<<"a and d can't be zero"<<endl;
    
    cout<<"The summation : ";
    
   
    
    
    system("pause");
    return 0;
}
