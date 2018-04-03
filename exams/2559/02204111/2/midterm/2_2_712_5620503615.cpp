//5620503615  MISSWARAPAPAR SUKRONG
#include <iostream>

using namespace std;
int main ()
{
     int i=1,n,num,digit=0,a,b=10,j=0,c=100,k=100,e;
        
        
        
        cout<<"Enter an integer :";cin>>n;
        while (i<=n)
        {
         num=n/i;
          
          digit++,i=i*10;
        }
        cout<<"Number of digit is "<<digit<<endl;
        
        
        
        while (b<=n)
        {
         a=n%b;
          j++ ;
         b=i+10;
        ;
        }
        
        while (k<=n)
        {
         e=n%c;
          e=e/10;
          k++ ;
         k=k+100;
        
        }
        
        
        
        system ("pause");
    return 0;
}
        
        
