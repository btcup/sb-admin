//5920503416  Tinnapat Satitwat
#include<iostream>
using namespace std;
int main()
{   
    int n,a,c;
    cout<<"Enter a positive is ";
    cin>>n;
    a=1;
    while((n%a)!=0)
    a++;    
    cout<<"Number of digit is "<<a<<endl;
    if(n>0)
    {
    cout<<"Factor of "<<n<<" are :"<<endl;
    for(c=a;c<=n;c++)
    {
      c=a;               
      while (c%n==0)
      {
      cout<<c<<" * "<<n<<endl;
      c++;
      
      }               
                     }
    }
    else
     cout<<"Invalid number !! "<<endl;  
         
    
    
    
    
    
    
    
 system("pause");
 return 0;   
}    
