#include<iostream>
#include<string>
using namespace std;
int GetIntVal(string strConvent)
{
    int intReturn;
    intReturn = atoi(strConvent.c_str());
    return(intReturn);
}
int Dec2X(int n,int b)
{
    
    
}
int main()
{
    int n,b,x;
    while(true)
    {
               cout << "Enter decimal number : ";
               cin >> n;
                              
               
               
               if(n>=0)
                       {
                              cout << "Enter base (2-9): ";
                              cin >> b;
                              cout << n <<"b10 is "<< x << "b"<< b <<endl;
                       }
               else
                   break;
    }
    system("pause");
    return 0;
}
