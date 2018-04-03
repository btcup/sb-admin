//5920552051Siwat Wisarnthamakorn
#include <iostream>
using namespace std;
void ToActive(string s){ 
cout<<"active :"<<s;     
}  
int main ()
{   
    string s;
    do{
    cout<<"Please input sentence :";
    getline(cin,s,'\n');
    ToActive(s);}
    while(1); 
    system ("pause");
    return 0;
}
