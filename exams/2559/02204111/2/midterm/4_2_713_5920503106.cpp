//5920503106 Name Thankorn Tulyod
#include <iostream>
using namespace std;
int main ()
{
    int n,i=1;
    cout<<"Enter a positive in teger: ";
    cin>>n;
    if (n%10<10)
    cout<<"Number of digit is 1"<<endl;
    else if (n%100<100)
    cout<<"Number of digit is 2"<<endl;
    else if (n%10>10)
    cout<<"Number of digit is 3"<<endl;
     do
     {
      if(n%i==0)
      {
      cout<<i;
      }
      }
     while (n>0);
  
    system ("pause");
    return 0;
}
