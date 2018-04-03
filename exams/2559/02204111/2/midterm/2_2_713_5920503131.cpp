//5920503131 thirasak  sayon
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
        int n,z;
        float i=0,x=0,sum=0,k=0,y=0;
         cout<<"Enter an integer : ";
         cin>>n;
        do
         {
                i++;
            x=pow(10,i);
            
         }
         while(x<n);
         cout<<"Number of digit is "<<i<<endl;         
         
         do
         {    k=k+1;
               y=(n%int(pow(10,k)))-y;
              sum=sum+pow(y,i);
              
              z=pow(10,k);
              
              
         }          
        while(z<n);
         cout<<n<<" is ";
         if(n!=sum)
         cout<<"not";
         cout<<" target number."<<endl;
         system("pause");
         return 0;
         }
