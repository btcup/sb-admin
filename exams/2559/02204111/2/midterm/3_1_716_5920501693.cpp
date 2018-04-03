#include <iostream> //5920501693 Wiriyathach chantha
using namespace std;
int main()
{
    double x,y,z;
    float a,b;
    cout<<"Arrival time : ";
    cin>>x;
    cout<<"Leave time : ";
    cin>>y;
    z=y-x;   
if(z<=03.15)
    {
             a=y-x ;
               cout<<int(a)<<"hours and "<<"minutes"<<endl;
               cout<<"you have to pay 0 bath"<<endl;}
    
else if(z>=04.15)
    {
            a=y-x  ; 
               cout<<int(a)<<"hours and "<<"minutes"<<endl;
               cout<<"you have to pay "<<(y-x)*20<<"bath"<<endl;}
else if  (z<=06.15)
    {
            a=y-x  ; 
               cout<<int(a)<<"hours and "<<"minutes"<<endl;
               cout<<"you have to pay "<<(y-x)*20<<"bath"<<endl;}

else if(z>=07.15)
    {
            a=y-x  ; 
               cout<<int(a)<<"hours and "<<"minutes"<<endl;
               cout<<"you have to pay "<<(y-x)*50<<"bath"<<endl;}
else if(z<=08.15) 
    {
            a=y-x; 
               cout<<int(a)<<"hours and "<<"minutes"<<endl;
               cout<<"you have to pay "<<(y-x)*50<<"bath"<<endl;}
else if(z>=08.15)
    {
            a=y-x ; 
               cout<<int(a)<<"hours and "<<"minutes"<<endl;
               cout<<"you have to pay 500 bath"<<endl;}
               
else if(z<=0)
    {
        cout<<"You can't leave before arrivaltime"<<endl;}
    
    system ("pause");
 return 0;   
}
