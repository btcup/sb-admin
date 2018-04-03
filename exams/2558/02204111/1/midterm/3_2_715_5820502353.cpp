#include<iostream>
using namespace std;
int main()
{
    long long n;
    int sum=0;
    cout<<"Please input number:";
    cin>>n;
    if(n>=0)
    {
            if(n%2==0)
              {
              for(int i=n%10;i%2==0;)
              sum=sum+i;
              cout<<"Summation of Even number"<<sum<<endl;  
              }
            else if(n%2!=0)
              {
              for(int i=n%10;i%2!=0;)
              sum=sum+i;
              cout<<"Summation of Odd number"<<sum<<endl;
              }
    }
    else
    cout<<"!! Wrong Input !!"<<endl;
system("pause");
return 0;
}

    
