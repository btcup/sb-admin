//5620501582 Nutthaya Chusinkul
#include<iostream>
using namespace std;
int main()
{
    
    int n,i,a;
    cout << "Enter a positive Number: " ;
    cin >> n;
    
    if(n>0)
    { 
    cout << "Number of digit is " << endl;
    cout << "Factor of " << n << " are: " << endl;
    for(i=1;n%i==0;i++)
    
    cout << i << " * " << n/i << " = " << n << endl;
    }
    
    else
    cout << "Invalid Number!!" << endl;
    
    system("pause");
    return 0;
}
