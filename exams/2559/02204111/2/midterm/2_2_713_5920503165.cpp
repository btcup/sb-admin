#include <iostream>
using namespace std;
int main()
{
    int x,d,g;
    cout<<"Enter an integer:";
    cin>>x;
    if(x>99&&x<1000)
       d=3;
       if(x>999&&x<10000)
       d=4;
       if(x>9999&&x<100000)
       d=5;
       if(x>99999&&x<1000000)
       d=6;
     cout<<"Number of digit is "<<d<<endl;
     
     cout<<x<<" is a target number"<<endl;
    
     cout<<x<<"is not a target number\n";
    system("pause");
    return 0;
}
