// 5920500107 thirawit yuenyao
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x,y=2,z=0,n,i=0;
    
    do
    {
               cout<<" Enter N: ";
               cin>>x;
    }
    while(x<=0);
                
    n=x;
    
    while(x!=1)
    {
               if(x%y==0)
               {
                         x=x/y;  
                         i++; 
               }
               else
                         y++;
               if(y>z)
                         z=y;
               
    }
    
    cout<<"The greatest factor of "<<n<<" is "<<z;
    
    if(i==1)
            cout<<"---->prime number"<<endl;
    else
            cout<<endl;
   
   
   
    system("pause");
    return 0; 
}

