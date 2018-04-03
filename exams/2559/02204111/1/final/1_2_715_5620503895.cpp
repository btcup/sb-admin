//5620503895 Phutthaphong Phongsukwetckun
#include <iostream>
using namespace std;
int main()
{
    string str;
    bool k;
    cout<<"Please input your sentence: ";
    getline(cin,str,'.');
    //str.insert()
   // str.replace(,,)
    //str.substr
    //str.erease(str.fine(0,"is"),2);
    for(int i=0;1;i++)
    for(int j=0;1;j++)
    {
    if(str[i]=="is"){
    k=0;
    cout<<"Error :"<<"Verb to be (is) not found"<<"."<<endl;break;}
    else (k=1)
    cout<<"active :"<<str<<"."<<endl;
    

system ("pause");
return 0;   
}
