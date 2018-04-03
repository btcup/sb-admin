#include<iostream>
using namespace std;
int main()
{
    long long number;
    long long x=10;
    long long y,z=1,sum=0;
    
    cout<<"Please input number :";
    cin>>number;
    
    
    
    if(number<1)
    cout<<"!! Wrong Input odd number !!"<<endl;
    
    else if(number%2==0)
    {
      cout<<"Summation of Even number "<<endl;
      for(x=10;x<=number;x=x*10)
      {
       y=number%x;
       y=y/z;
       if(y%2==0)
       {
       sum=sum+y;
                
    
       cout<<y;
       cout<<" "<<"+"<<" "; 
       }
       
       z=z*10;
       
      } 
      cout<<" = "<<sum;          
    }
    
    else 
    {
      cout<<"Summation of odd number "<<endl;
       for(x=10;x<=number;x=x*10)
      {
       y=number%x;
       y=y/z;
       if(y%2!=0)
       {
       sum=sum+y;         
       cout<<y;
       cout<<" "<<" + "<<" ";
       }
       z=z*10;
       
      }
        
      cout<<" = "<<sum;                       
    }
    
    
    system("pause");
    return 0;
}
