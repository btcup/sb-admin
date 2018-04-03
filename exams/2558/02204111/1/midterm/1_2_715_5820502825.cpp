#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x,y,a,b,cost;
    cout<<"Please input usage : ";cin>>x;
    do
    {  
       cout<<"Please input voltage : ";cin>>y;
       cout<<endl;
       if(y>=22||y<=33)
           {
           cout<<"Electricity cost : "<<endl;
           cout<<"Service : 228.17"<<endl;
           cout<<"Ft :60.294"<<endl;
           cout<<"Vat 7 % : "<<60.294*x<<endl;
           cost=(x*2.4649)+(228.17)+(46038*x)+(7/100);
           cout<<endl;
           cout<<"Total Cost : "<<cost<<" Baht\n";
           } 
       if(y<22)
           {
           if(x>=0||x>=150)
           cout<<"Electricity Cost 0-150: "<<(x*1.8047)+(40.90)+(46.38*x)+(7/100)<<endl;
           else if(b>150||b>=400)
           cout<<"Electricity Cost 151-400: "<<(x*2.7781)+(40.90)+(46.38*x)+(7/100)<<endl;
           else if(b>400)
           cout<<"Electricity Cost 401 -> : "<<(x*2.9780)+(228.17)+(46.38*x)+(7/100)<<endl;
           }
    }
    while(x<0);  
    cout<<"Invalid Input !!! "<<endl;
    
system ("pause");
return 0;
}
    
    
