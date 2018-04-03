#include<iostream>
#include<cmath>
using namespace std;
int GetIntval(string strConvert){
    int intReturn;
    intReturn = atoi(strConvert.c_str());
    return(intReturn);
}  
int main()
{   
    int a,b,sum;
    cout<<"Enter decimal number :";
    cin>>a;
    cout<<"Enter base (2-9) :";
    cin>>b;
    a/b<=1;sum=a/b;
    cout<<a<<"b10 is "<<sum<<"b"<<b<<endl;
system("pause");
return 0;
}
