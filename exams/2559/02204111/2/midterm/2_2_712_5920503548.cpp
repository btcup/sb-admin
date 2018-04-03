#include<iostream>    
#include<cmath>            //5920503548 Rungsimun  Kwanpunngam
using namespace std;
int main()
{
    int num,digit,i,x,z,g;
    cout<<"Enter an integer:";
    cin>>num;
    i=num;
    
    digit=0;
    do
    {
        i=i/10;
        digit++;
    }while(i>0);
   cout<<"Number of digit is"<<digit;
   digit=g;
   while(digit>0)
   { 
          x=num/( pow(10,digit-1));
          num=num%( pow(10,digit-1));
          z=pow(x,g);
          if(z)
          {
          
          }
          digit--;
   }
   
    if(num!=z)
    cout<<num<<"is not target number.\n";
    else
    cout<<num<<"is target number.\n";
    
    system("pause");
    return 0;
}
