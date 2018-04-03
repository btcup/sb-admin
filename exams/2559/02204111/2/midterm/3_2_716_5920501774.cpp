//5920501774 Supussara Kaewcharoensithong
#include <iostream>
using namespace std;
int main ()
{
    double x,i,sum=0.0;
    int a,b;
    
    do
    {
    cout<<"Enter electricity cost per unit (baths) :";
    cin>>x;
    }
    while(x<=0);
    
    do
    {
    cout<<"Enter last unit :";
    cin>>a;
    if(a>=0&&a<100000)
    {
    cout<<"Enter current unit :";
    cin>>b;  
    }
    else
    {
       cout<<"-- End of Calculation --"<<endl;
       continue;
       } 
    if(b>=0&&b<100000)
    {
    if(b>a)
    {
    cout<<"Units used = "<<b-a<<endl;
    i=(b-a)*x;
    cout<<"Electricity charge (baths) = "<<i<<endl;
    sum=sum+i;
    }
    if(b<a)
    {
           cout<<"Invalid current unit!"<<endl;
           }
           }
    else
    {
       cout<<"-- End of Calculation --"<<endl;
       continue;
       } 
       }
       
    while(a>=0&&b>0);
    
    
    
    cout<<"Total of Electricity charge (bahts)"<<sum;
    
    
    
    
    
    

                    system("pause");
    return 0;   
}
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
 
