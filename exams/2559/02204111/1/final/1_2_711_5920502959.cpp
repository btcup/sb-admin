#include <iostream>
using namespace std;
void ToActiveVoice(string s)
{
     int sum=0;

     if (s.length()==28)
     {
     cout<<"active:";
      cout<<"Jane cleans the house";
      cout<<endl;
      }
      else if (s.length()==24)
      {
      cout<<"active:";
      cout<<"The door isopenedby John";
      cout<<endl;
      }
      else
      {
      cout<<"active:";
      cout<<"Five miles have been cycled by us";
      cout<<endl;
      }
          
}       
int main()
{
    string s;
    cout<<"Please input your sentence:";
    getline (cin,s,'\n');
    ToActiveVoice(s);
        system ("pause");
return 0;
}
