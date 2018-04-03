#include <iostream>
using namespace std;


int GetIntVal (string strCovent)
{
    int intReturn;
    intReturn = atoi(strCovent.c_str());
    return(intReturn);
}

int main ()
{
    string strCovent;
    int y;
    cout <<"Enter decimal number : " ;
    cin>> strCovent;
    cout << "Enter base (2-9) : ";
    cin >>y;
    strCovent = GetIntVal ( strCovent);
    

system ("pause");
}

    
