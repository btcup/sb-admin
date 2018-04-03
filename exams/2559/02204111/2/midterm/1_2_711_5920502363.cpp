//5920502363 Thanakorn Samakkee
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int N,i=1;
    do
    {
        cout<<"Enter N : ";
        cin>>N;
    }
    while (N<=0);
    cout<<"The greatrst factor "<<N<<" is ";
    if (N%i==0);
    {
       i++;
       cout<<i<<endl;  
    }
    system ("pause");
    return 0;
}
    
