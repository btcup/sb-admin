//5920503521 puwitch charoensapsri 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,j,a,b,c;
    float s,i;
   cout<<"Enter a positive integer :"; 
   cin>>n;  
   if(n<=0)
   {
           cout<<"Iuvalid number!!"<<endl;        
   }
   else
   {
        i=1;
           do
           {
               
           s=n/pow(10,i);
           c=int(s);
           //cout<<s<<" "<<c<<" "<<i<<endl;
            i++;
           }
           while (c!=0);
           cout<<"Number of digit is "<<i-1<<endl;
           cout<<"Factor of "<<n<<" are:"<<endl; 
           j=1;
           while(j<=n)
           {
                a=n/j ;
                b=a*j;
                if(b==n)
                {
                cout<<j<<"*"<<a<<"="<<n<<endl;
                }  
                j++; 
           }
   }
    system("pause");
    return 0;   
}
