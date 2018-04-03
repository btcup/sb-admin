#include<iostream>
using namespace std;
int main()
{
    long long  x;
    cout<<"Please input number: ";
    cin>>x;
    
    if(x>=0)
    {
    if(x%2==0)
    cout<<"Summation of Even number"<<x<<endl;
    

    else if(x%2==1)
    cout<<"Summation of Odd number"<<x<<endl;
   
   
}
else
cout<<"!!Wrong Input!!"<<endl;
    
    
system("pause");
return 0;
}
