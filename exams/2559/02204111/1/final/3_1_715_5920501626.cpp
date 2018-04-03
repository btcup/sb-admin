//5920501626 Ponpimon Nopparatnitiphong
#include<iostream>
using namespace std;

string mySearch(string x,string y)
{
       if(y.substr(0,1)=="*")
       {
           cout<<"Incorrect keyword!";
       }
       else if(y.find("*",0)!=string::npos)
       {
        }
            
       else if(x.find(y,0)!=string::npos)
       {
           cout<<"'"<<y<<"'"<<" is in above text.";
           
       }
       else
       {
           cout<<"'"<<y<<"'"<<" is not in above text.";
       }
    return 0;
}
       
int main()
{
    string s1,s2;
    cout<<"Enter text: ";
    getline(cin,s1,'\n');
    cout<<"Enter keyword: ";
    getline(cin,s2,'\n');
    mySearch(s1,s2);
    
    system("pause");
    return 0;
}
    
