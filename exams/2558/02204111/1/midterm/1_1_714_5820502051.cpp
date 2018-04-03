#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    int a,s,d;
    double c,v,b,n,z;
    cout<<"Please input usage : ";
    cin>>a;
    cout<<"Please input voltage : ";
    cin>>s;
    n=0.4638;
    z=n*a;
   
    
    cout<<" \n";
    if(s<22){
    c=40.90;
    
       if(a<150)
       { 
         v=a*1.8047;
         cout<<"Electricity cost : "<<v<<endl;
         cout<<"Service : "<<c<<endl; 
         cout<<"Ft : "<<z<<endl;
         cout<<"Vat 7% : "<<(v+c+z)*0.07<<endl<<endl;
         cout<<"Total cost : "<<((a*v)+c+(n*a)+b)<<endl;}
       else if(a=150)
       { 
         v=a*1.8047;
         cout<<"Electricity cost : "<<v<<endl;
         cout<<"Service : "<<c<<endl; 
         cout<<"Ft : "<<z<<endl;
         cout<<"Vat 7% : "<<(v+c+z)*0.07<<endl<<endl;
         cout<<"Total cost : "<<(a*v)+c+(n*a)+b<<endl;} 
       else if(a>150||a<=400)
       {  v=a*2.7781;
         cout<<"Electricity cost : "<<v<<endl;
         cout<<"Service : "<<c<<endl; 
         cout<<"Ft : "<<z<<endl;
         cout<<"Vat 7% : "<<(v+c+z)*0.07<<endl<<endl;
         cout<<"Total cost : "<<(a*v)+c+(n*a)+b<<endl;} 
         else if(a>400)
       {  v=a*2.9780;
         cout<<"Electricity cost : "<<v<<endl;
         cout<<"Service : "<<c<<endl; 
         cout<<"Ft : "<<z<<endl;
         cout<<"Vat 7% : "<<(v+c+z)*0.07<<endl<<endl;
         cout<<"Total cost : "<<((a*v)+c+(n*a)+b)<<endl;} }
   
    
system("pause");
return 0;
}
