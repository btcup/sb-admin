//5920503840 Mr.Panudate Nak-aumka
#include<iostream>
using namespace std;
int ToActive(string x)
{
               
}
int main()
{
    string voice;
    cout<<"Please input your sentence:";
    cin>>voice;
    ToActive(voice);
    if(voice.find(0,3)=='The')
    {
       cout<<"active : "<<<<endl; 
    }
    else
    cout<<"Error: Verb to ne (is) not found."<<endl;
    system("pause");
    return 0;
}
