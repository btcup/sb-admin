//5620551768 Mr.pasut subjam
#include <iostream>  
#include <cmath>
using namespace std;
int main()
{
    char x;
    double a,b,c,d,e;
    cout<<"------- Car lease calculator -----------"<<endl;
    cout<<"Enter car amount:";cin>>x;
    if(x!='A'&&x!='B'&&x!='C'&&x!='J')
    cout<<"Error"<<endl;
    else
    {
    cout<<"Enter number of year (1-6):";cin>>a;
    if(a>6)
    cout<<"Error!, number of years is not in range"<<endl;
    else
    {
    cout<<"Enter percentage of down payment:";
    cin>>b;
    if(b==50)
    c=(b*738000)/100;
    d=(369000*1.89*3);
    e=(c+20922.3)/36;
    cout<<"Financing amount:"<<c<<endl;
    cout<<"Amount of interest:"<<d<<endl;
    cout<<"Monthly payment:"<<e<<endl;
      
}
}
    
   
    
    
    
     
    
    
    
    system("pause");
    return 0;
}
