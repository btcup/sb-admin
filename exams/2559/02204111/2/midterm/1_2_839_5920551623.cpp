//5920551623 Saharath Saeangwilai
#include <iostream>
using namespace std;

int main()
{
    int x,i=1;
    cout<<"Enter a positive integer: ";
    cin>>x;
    cout<<endl;
    if (x<0)
       cout<<"Invalid number!!"<<endl;
    else if (x>0){  
    cout<<"Number of digit is "<<endl;
    cout<<"Factor of "<<x<<" are:"<<endl;   
    do
    {
    cout<<i<<" * "<<x<<" = "<<i*x<<endl;
    i++;
    }while(i=x);
    }
    system ("pause");
    return 0;
}

