#include<iostream> //5620550591 Piyapon Toplean
using namespace std;
int main()
{
    int N,x,i=1,a;
   do
    { cout<<"Enter N:";
      cin>>N;
    a=N-i;
    if (N%a==0)
    break;
    i=i+1;}
    while (N<=0);
    cout<<"The greateat factor of"<<N<<"is"<<a;
    system ("pause");
    return 0;
}
