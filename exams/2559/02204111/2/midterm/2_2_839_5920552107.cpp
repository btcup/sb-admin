#include<iostream>
#include<cmath>
using namespace std ;
int main ()
{
    int N,i,A,total=0 ;
    float sum=0 ;
    cout << "Enter an integer : " ;
    cin >> N ;
    while (i!=0)
    {
    i = N ;
    i=i/10 ;
    sum=sum+1 ;
    }
    cout << "Number of digit is " << sum ;
    i=1;
    while (i<=sum)
    {
    A=N/pow(10,sum-i) ;
    total=total+pow(A,sum) ;
    i++ ;
    }
    if (total==N)
    cout << N << "is a target number.\n" ;
    else
    cout << N << "is not target number.\n" ;

system("pause") ;
return 0; 
}
      
