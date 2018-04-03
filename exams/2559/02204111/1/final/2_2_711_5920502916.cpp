//5920502916Weerapat Insomtua
#include <iostream>
using namespace std;
void ToPassive(string s)
{
     int i;
     for(i=0;i<s.size();i++)
     {
     if(s.find(i,'ed')==-1)
     cout<<"Error: Not present simple tense"<<endl;
     else
     cout<<"passive :"<<s<<endl;
     {break;}
     }

}
int main()
{
    string sentence;
    cout<<"Please input your sentence: ";
    getline(cin,sentence,'\n');
    ToPassive(sentence);
system("pause");
return 0;
}

