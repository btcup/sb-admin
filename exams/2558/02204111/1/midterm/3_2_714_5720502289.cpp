#include<iostream>
using namespace std;
int main()
{
    long long a;
    int b,c,d,e;
    cout<<"Please input number : ";
    cin>>a;
    if(a%2==1&&a>0){
               cout<<"Summation of Odd number "<<endl;
               b=a%10;
               cout<<b<<" = "<<b<<endl;
               }
    else if(a%2==0&&a>0){
         cout<<"Summation of Even number "<<endl;
          b=a%10;
               cout<<b<<" = "<<b<<endl;          

    
}    
    else
    cout<<"!! Wrong Input !!"<<endl;
    
    system("pause");
    return 0;
}
