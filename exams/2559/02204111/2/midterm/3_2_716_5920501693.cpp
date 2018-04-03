#include <iostream> //5920501693 Wiriyathach chantha
using namespace std;
int main()
{
    float x,y,z,a,b,c,d,e;
    if(x>0)
    {
    do
    {
    cout<<"Enter electricity cost per unit (baths) : ";
    cin>>x;
}while(x<=0);}
do
{
cout<<"Enter last unit : ";
cin>>y;
} while(y<=0);
do
{
cout<<"Enter current unit : ";
cin>>z;
} while(z<=0);
a=z-y;
cout<<"unit used = "<<a<<endl;
b=(z-y)*x;
cout<<"electricity charge (baths) = "<<b<<endl;
 
    system ("pause");
 return 0;   
}
