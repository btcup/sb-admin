#include<iostream>
using namespace std;
int GetIntVal(string strConvert)
    {
      int intReturn;
      intReturn = atoi(strConvert.c_str());
      return(intReturn);
    }
int main()
{
    int a,b; 
    cout<<"Enter decimal number : ";
    cin>>a;
    cout<<"Enter base (2-9) : ";
    cin>>b;
    cout<<a<<"b10 is 1000b"<<b<<endl;
    cout<<"Enter decimal number: ";
    system ("pause");
    return 0;
}
