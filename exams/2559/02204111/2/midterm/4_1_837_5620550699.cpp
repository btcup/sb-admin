//5620550699 Supakit Tanprawat
#include <iostream> 
#include <cmath>
using namespace std;
int main()
{
    char a;
    double x,y,z;
 float b,c;


 
    cout<<"Type of vehicle ((C)Car or (M)Motorcycle):";
    cin>>a;
    cout<<"Arrival Time:";
    cin>>x;
    cout<<"Leave time:";
    cin>>y;
    
    b=y-x;
round(x);
round(y);
if (a=='M')  

{
            if(b<=3)
            z=0;
             else if(b==4&&b<=7)
             z=x*10;
             else if(b>=7)
             z=150;
            
             }
if(a=='C')

{
            if(b<=2)
             z=0;
             else if(b>=3&&b<=5)
             
                 
             z=x*30;
             
             else if(b>=6&&b<8)
             z=(x*50);
             else if(b=8)
             z=500;
            
             }
            
            if (b<=0)
 cout<<"You can't leave before arrival time"<<endl;
 else if(b>0)
 {
             cout<<int(y-x)<<"hours and"<<c<<"minutes"<<endl;
             cout<<"You have to pay "<<z<<"bath"<<endl;
}
     
             
    system("pause");
    return 0;
             
}
