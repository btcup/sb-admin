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
    double a,b;
    do
    {
          cout<<"Enter decimal number : ";cin>>a;
          if(a<0)break;
          
          cout<<"Enter base (2-9) : ";cin>>b;
    }
    while(a>0);
    
    
    
    
    
    system("pause");
    return 0;
    
}
