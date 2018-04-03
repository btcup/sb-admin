#include<iostream>    // 5920550244 peerawat tonuntawanich 
using namespace std;
int main ()
{
    int n,a,i,j,k;
    cout<<"Enter a positive integer : ";
    cin>>n;
    cout<<endl;
    if (n<=0)
    cout<<"Invalid number!!"<<endl;
    else
    {
        k=2;
        while(k%n==0)
        {
        if(k%n==0)
        cout<<"Number of digit is "<<k<<endl;
        k++;
        }
        i=1;
        cout<<"factor of "<<n<<" are : "<<endl;
        while(i<=n)
        {
        j=n/i;
        if (n%i==0)
        cout<<i<<" * "<<j<<" = "<<n<<endl;
        i++;
        }
    }    
    system ("pause");
    return 0;
    
}
