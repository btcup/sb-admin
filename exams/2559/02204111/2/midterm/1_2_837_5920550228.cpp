#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    do
    {
        cout<<"Enter N:";
        cin>>n;
      if(n>0)
      {
         for(b=2;n%b==0;b++)
         {
         a=n%b;
         }
         cout<<"The greatest factor of "<<n<<" is "<<a<<endl;
         }
    }while(n<0);

system("pause");
return 0;
}
