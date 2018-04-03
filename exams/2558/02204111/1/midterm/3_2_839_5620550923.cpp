#include <iostream>
using namespace std;
int main()
{
    long long n,i,x=0,y=1,z;
    int sum=0;
 
    cout<<"Please input number: ";
    cin>>n;
  
       if( n%2==0 && n>0 )
       {
          cout<<"Summation of Even number\n";
          
          do
          {
             i=n/y;
             i=i%10;
             z=n/y;
             x++;
             if(i%2==0&& z!=0)
             {
                sum=sum+i;
                cout<<i;
             }
             if(i%2==0&&z>10)
             cout<<" + ";
             y=y*10;
          }
          while(x<20);
          cout<<" = "<<sum<<endl;
       }
       
       else if ( n%2!=0 && n>0 )
       {
          cout<<"Summation of Odd number\n";
          do
          {
             i=n/y;
             i=i%10;
             z=n/y;
             x++;
             if(i%2!=0&& z!=0)
             {
                sum=sum+i;
                cout<<i;
             }
             if(i%2!=0&&z>10)
             cout<<" + ";
             y=y*10;
          }
          while(x<20);
          cout<<" = "<<sum<<endl;
       }
       
       else if (n<=0)
       {
          cout<<"!! Wrong Input !!\n";
       }
       
    system("pause");
    return 0;
}
