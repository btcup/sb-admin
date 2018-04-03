#include<iostream>
using namespace std;
int main()
{
    long long n;
    int sum=0,choose;
    cout<<"Please input number: ";
    cin>>n;
    cout<<endl;
    while(true)
    
    if (n<0)
    {
            cout<<"!! Wrong Input !!"<<endl;
            break;
    }
    else
    {
           if(n%2==0)
           {
                     
                     choose=n;
                     cout<<"Summation of Even number";
                     cout<<endl<<endl;
                     
                     
                     sum = sum+n;
                     cout<<sum<<endl;
           }
           else
           {
                     choose=n;
                     cout<<"Summation of Odd number";
                     cout<<endl<<endl;
                     
                     
                     sum = sum+n;
                     cout<<sum<<endl;
           }
    
                     
           
           break;
    }
        
    system("pause");
    return 0;
}
