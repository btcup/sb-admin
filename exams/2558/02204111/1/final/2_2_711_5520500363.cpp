#include <iostream>
#include <string>
using namespace std;

int main()
{
    string st1;
    
    
    cout<<"Enter your sentence :";
    getline(cin,st1,'\n');
    
    cout<<"There are "<<st1.length()<<" words of the' ."<<endl;
    
    
    system ("pause");
    return 0;
}
