//5920503971 Julie Kanokros
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
 int n;
 cout<<"Enter a positive integer: ";
 cin>>n;
 if(n>0&&n<10)
 cout<<"Number of digit is: "<<1<<endl;
 if(n>=10&&n<100)
 cout<<"Number of digit is: "<<2<<endl;
 if (n>=100&&n<1000)
 cout<<"Number of digit is: "<<3<<endl;
 if (n>=1000&&n<10000)
 cout<<"Number of digit is: "<<4<<endl;
 
 if(n<=0)
 cout<<"Invalid number!";
 
 cout<<"Factor of "<<n<<" are :"<<endl;
 
 system("pause");
 return 0;  
}
