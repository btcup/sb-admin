//5920500158  ratthasart  inpeang
#include <iostream>
using namespace std ;
int main()
{
    int n,i,digit;
    i=1;
    cout<<"enter a positive integer:";
    cin>>n;
   
    
    if(n>0)
    {
            if(n/1000!=0)
    digit=4;
    else if(n/100!=0)
    digit=3;
    else if(n/10!=0)
    digit=2;
    else
    digit=1;
    cout<<"numbet of digit is "<<digit <<endl;
    cout<<"factor of"<<n<<"are:"<<endl;
    do
    if(n%i==0)
    {
    cout<<i<<"*"<<n/i<<"="<<n<<endl;
    i++;
}
    else
    {
    i++;
    continue;
}
while(i<=n);
}
else
cout<<"invalid number!!"<<endl;
system("pause");
return 0;
}
    
