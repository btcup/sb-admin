#include<iostream>  //5920502720 Nuttachar Pummarin 
using namespace std;
int main ()
{   
    int n,a,b,c,i,sum;
    do
    {
    cout<<"Enter N:";
    cin>>n;
    a=n;
}
    while (n<=0);
    i=2; 
    do
    {   
         
        if(a%i==0)
        a=a/i;
        else i++;
    
}while (a!=1);

    
    cout<<"The greast factor of "<<n<<" is "<<i;
    if(n==i)
    cout<<"--> prime number"<<endl;;
    
    cout<<endl;
    
    system ("pause");
    return 0;
}
