#include<iostream> //5920501049 Yanisa Kachapat
using namespace std;
int main()
{
    int n,i=0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    if(n<=0)
    cout<<"Invalid number!!"<<endl;
    else
    {
        cout<<"Number of digit of "<<n<<" are: "<<endl;
        cout<<"Factor of "<<n<<" are: "<<endl;
        while(i<=n)
        {
               i++;
               if(n%i==0)
               {
               cout<<i<<" * ";
               }
               else
               {
               continue;
               }
               cout<<(n/i)<<" = "<<n<<endl;
        }
    }
system("pause");
return 0;
}
