//5920501189 Patcharawan Rerkchaimongkol
#include <iostream>
using namespace std;
int main()
{
    int integer,digit,i=1;
    cout<<"Enter a positive integer: ";
    cin>>integer;
    cout<<endl;
    if(integer>0)
    {
        digit=integer;         
        cout<<"Number of digit is "<<digit<<endl;
        cout<<"Factor of "<<integer<<" are:"<<endl;
        for(i=1;i%integer==0;i++)
        {
            cout<<i<<"*"<<integer<<" = "<<integer<<endl;           
        }         
    }
    else
        cout<<"Invalid number!!"<<endl;
    system ("pause");
    return 0;
}
