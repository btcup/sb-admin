#include<iostream>
using namespace std;
int main()
{
    long long n;
    cout<<"Please input number:";
    cin>>n;
    if(n<0)
    {
           cout<<"!! Wrong Input !!"<<endl;      
    }
           
           
    else
    {
               if(n%2==0)
               {
                         cout<<endl;
                         cout<<"Summation of Even number"<<endl;
                         cout<<endl;
                         cout<<endl;
                        
               }
               else if(n%2==1)
               {    
                         cout<<endl;
                         cout<<"Summation of Odd number"<<endl;
                         cout<<endl;
                         cout<<endl;
                        
               }
    }
    
        
    
    
    system("pause");
    return 0;
}
