#include <iostream>
using namespace std;
int GetIntVal (string strConvert)
{
    int intReturn;
    intReturn = atoi (strConvert.c_str());
    return (intReturn);
}
int main ()
{
    int x;
    cin>>x;
  
    system ("pause");
    return 0;
}
