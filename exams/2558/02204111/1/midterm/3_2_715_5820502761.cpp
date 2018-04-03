#include<iostream>
using namespace std;
int main()
{   
    long long n,x,sum,i;
    cout<<"Please input number:";
    cin>>n;
    if(n<0)
    {
           cout<<"!! Wrong Input !!"<<endl;
           cout<<endl<<endl<<endl;
    }
    else if(n%2==0)
    {
              cout<<endl<<endl<<endl<<"Summation of Even number\n";
              cout<<endl;
              sum=n%10;
              cout<<sum;
              if(n/100!=0)
              cout<<" + ";
              for(i=100;n/(i/10)!=0;i*=10)
              {        if(n%i/(i/10)%2!=0)
                       continue;
                       sum=sum+(n%i/(i/10));
                       cout<<n%i/(i/10);
                       if(n/i/10!=0)
                       cout<<" + ";
              }
    cout<<" = "<<sum<<endl;
    }
    else if(n%2==1)
    {
              cout<<endl<<endl<<endl<<"Summation of Odd number\n";
              cout<<endl;
              sum=n%10;
              cout<<sum;
              if(n/100!=0)
              cout<<" + ";
              for(i=100;n/(i/10)!=0;i*=10)
              {        if(n%i/(i/10)%2!=1)
                       continue;
                       sum=sum+(n%i/(i/10));
                       cout<<n%i/(i/10);
                       if(n/i/10!=0)
                       cout<<" + ";
              }
    cout<<" = "<<sum<<endl;
    }
    
   system("pause");
   return 0;
}
