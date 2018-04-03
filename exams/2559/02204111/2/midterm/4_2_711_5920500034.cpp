//5920500034 Natthawadee Sangket 711
#include<iostream>
using namespace std;
int main ()
{
int n,i;
cout<< "Enter a positive integer :"	;
cin>>n;
i=1;
if(n<=0)
cout<<"Invalid number !!"<<endl;
cout<<"Factor of "<< n <<" are  :"<<endl;
while(n>0)
{
if(n%i==0)
{
cout<<i<<"*"<<n/i<<"="<<n<<endl;
}
i++;
}
system ("pause");
return 0;
}



