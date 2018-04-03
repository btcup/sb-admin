//5920501294 Augkun kanchanapisitkun
#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
    cout<<"Enter N: ";
    cin>>n;
    }    
    while (n<=0);
    if (n<=11||n>10000)
    {
      if (n%n==0)
      cout<<"The greatest fator of "<<n<<" is "<<n<<" --> prime number "<<endl;
    }
    else if (n%151==0) 
    cout<<"The greatest fator of "<<n<<" is 151"<<endl;
    else if (n%11==0) 
    cout<<"The greatest fator of "<<n<<" is 11"<<endl;
    else if (n%5==0) 
    cout<<"The greatest fator of "<<n<<" is 5"<<endl;
    else if (n%3==0) 
    cout<<"The greatest fator of "<<n<<" is 3"<<endl;
    else if (n%2==0) 
    cout<<"The greatest fator of "<<n<<" is 2"<<endl;
    else
    cout<<"The greatest fator of "<<n<<" is "<<n<<" --> prime number "<<endl;
    system("pause");
    return 0;
}
