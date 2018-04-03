//5920502681 Charkrit pantuta
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    i=1;
    cout<<"Enter N: ";
    cin>>n;
    while(n<=0)
    {
          cout<<"Enter N: ";
          cin>>n;     
    }
    while(n%i==0)
    {
                 i++;
    }
    cout<<"The greatest factor of "<<n<<"is "<<i;
    if(i==n)
    {
            cout<<" ---> prime number"<<endl;
    }       
 system("pause");
 return 0;
}               
              
