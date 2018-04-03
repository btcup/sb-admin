//5920501766 Sucheera   Thongsuk
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int n,a,b,c,d,e;
    float A,B,C,D,E,x;
    cout<<"Enter an integer :";
    cin>>n;
    if (n%10000!=n)
       {
       A=n/10000;
       a=n%10000;
       B=a/1000;
       b=a%1000;
       C=b/100;
       c=b%100;
       D=b/10;
       d=b%10;
       E=d/1;
       x=pow(A,5)+pow(B,5)+pow(C,5)+pow(D,5)+pow(E,5);
       cout<<"Number of digit is 5"<<endl;
       if (x==n)
          cout<<n<<"is target number."<<endl;
       else if (x!=n)
          cout<<n<<"is not target number."<<endl;
       }    
    else if (n%1000!=n)
       {
       A=n/1000;
       a=n%1000;
       B=a/100;
       b=a%100;
       C=b/10;
       c=b%10;
       D=c/1;
       x=pow(A,4)+pow(B,4)+pow(C,4)+pow(D,4);
       cout<<"Number of digit is 4"<<endl;
       if (x==n)
          cout<<n<<"is target number."<<endl;
       else if (x!=n)
          cout<<n<<"is not target number."<<endl; 
       }
    else if (n%100!=n)
       {
       A=n/100;
       a=n%100;
       B=a/10;
       b=a%10;
       C=b/1;
       x=pow(A,3)+pow(B,3)+pow(C,3);
       cout<<"Number of digit is 3"<<endl;
       if (x==n)
          cout<<n<<"is target number."<<endl;
       else if (x!=n)
          cout<<n<<"is not target number."<<endl; 
       }
    system ("pause");
    return 0;
}
