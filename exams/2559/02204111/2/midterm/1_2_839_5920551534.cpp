//5920551534 Rapeephat Laklaem
#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cout<<"Enter N: ";
    cin>>n;
    for(x=2;x%n!=0;x++)
    cout<<"The greatest factor of "<<n<<" is "<<x<<endl;
system("pause");
return 0;
}
