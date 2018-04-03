#include<iostream>
using namespace std;
int main()
{ long long  a,sum;
cout<<"Please input number :";
cin>>a;

if(a%2!=1&&a>0)
cout<<"Summation of Even number"<<endl;
else if(a%2==1&&a>0)
cout<<"Summation of odd number"<<endl;
else if(a<0)
cout<<"!! Wrong Input !!"<<endl;



    
    
    
system("pause");
return 0;    
}
