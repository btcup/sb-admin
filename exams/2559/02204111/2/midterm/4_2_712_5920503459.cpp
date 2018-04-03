#include <iostream>
using namespace std;
int main()
{
    int N,i=1,k,a=1;
    cout<<"Enter a position integer: ";
    cin>>N;
    if(N>0)
    {
         if(N/10==0)
         {
              a=1;
              cout<<"Number of digit is "<<a<<endl;
         }
         else
         {
         if(N/10<10)
         {
              a=2;
              cout<<"Number of digit is "<<a<<endl;
         }
         if(N/10<100)
         {
              a=3;
              cout<<"Number of digit is "<<a<<endl;
         }
         if(N/10<1000)
         {
              a=4;
              cout<<"Number of digit is "<<a<<endl;
         }
         }     
         cout<<"Factor of "<<N<<" are:"<<endl;
         k=N;
         while(N%i==0)
         {
               cout<<i<<" * "<<k<<" = "<<N<<endl;
               cout<<k<<" * "<<i<<" = "<<N<<endl;
               i++;
               k=N/i;
         }
    }
    else
    {
        cout<<"Invalid number!!"<<endl;
    }
    system ("pause");
    return 0;
}
         
    
