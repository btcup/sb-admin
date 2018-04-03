//5920550678 Korawit Pakdiphummatee
#include <iostream>
using namespace std;
int main()
{
    int p,n,m,s,o;
    cout<<"Enter N : ";
    cin>>n;
    while (n>0)
    {
          if(n%3==0)
          {
          m=3;
          o=n/m;
          cout<<"greatest factor of "<<n<<" is "<<o<<endl;break;
          }
          else if (n%2==0)
          {
          m=2;
          o=n/m;
          cout<<"greatest factor of "<<n<<" is "<<o<<endl;;break;
          }
          else if (n%5==0)
          {
          m=5;
          o=n/m;
          cout<<"greatest factor of "<<n<<" is "<<o<<endl;;break;
          }
    }
    system ("pause");
    return 0;
}
