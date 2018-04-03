#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,e;
    do{   
          cout<<"Enter electricity cost per unit (baths) :";
          cin>>a;
          
          cout<<"Enter last unit :";
          cin>>b;
          
          cout<<"Enter used unit :";
          cin>>c;
          
          cout<<"Unit used = ";
          cin>>d;
          
          cout<<"Electriciti charge (baths) = ";
          cin>>e;
          }
    while((a>=1)&&(b>=1)&&(b<=99999)&&(c>=1)&&(c<=99999)&&(c>b));
    {
    cout<<"End";
}
    system("pause");
    return 0;
}
    
          
          
          
          
          
          
          
    
