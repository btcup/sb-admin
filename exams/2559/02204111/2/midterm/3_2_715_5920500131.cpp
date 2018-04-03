#include<iostream> //5920500131 phanuwat suksompak
using namespace std;
int main()
{
    float x,y,z;
    int a,b;
    cout<<"Enter electricity cost per unit (bath):";
    cin>>x;
    while(x<0)
    {
    cout<<"Enter electricity cost per unit (bath):";
    cin>>x;
              }   
    cout<<"Enter last unit:";
    cin>>a;
    cout<<"Enter current unit:";
    cin>>b;
    while(1)
    {
        if(b<a)
    {
    cout<<"Invalid current unit!"<<endl;
    cout<<"Enter last unit:";
    cin>>a;
    cout<<"Enter current unit:";
    cin>>b;
    }
       if(b>a)
    {
     y=(b-a)*x;
    cout<<"Uint used = "<<b-a<<endl;      
    cout<<"Electricity charge (bahts)= "<<y<<endl;
    cout<<"Enter last unit:";
    cin>>a;
    
    if(a==-1)
    {
    cout<<"--End of Calculation--"<<endl;
    break;
}
    cout<<"Enter current unit:";
    cin>>b;
     }
     
            
     }
 system("pause");
    return 0;
    
    
    }
