//5920552051 Siwat Wisarnthamakorn
#include <iostream>
using namespace std;
int main()
{
    int i=0,n,sum;
    cout<<"input value :";
    cin>>n;
    while (i<n)
    {
          i--;
    cout<<"input value :";
    cin>>n;
    if (n>=10)
    cout<<"Invalid Input!! Tyr Again"<<endl;
    if(n<0)
    {
    cout<<"Total is "<<sum<<endl;
    break;
           }
    }
    
    system ("pause");
    return 0;
}
