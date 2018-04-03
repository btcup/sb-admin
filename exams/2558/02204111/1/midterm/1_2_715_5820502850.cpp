#include <iostream>
using namespace std;
int main(){
    int a,b,c,d=0;
    do{
    cout<<"Enter employee ID and Salary : ";
    cin>>a>>b;
    if(a>c)
    c=a;
    if(b>=15000&&b<=25000)
    d++;
}
    while(a>0&&b>0);
    cout<<endl;
    
    cout<<"Number of meployers in the company = "<<c<<endl;
    cout<<"Number of salaries between 15,000 - 25,000 bath = "<<d<<endl;
    system ("pause");
    return 0;
}
