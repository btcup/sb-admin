#include <iostream>
using namespace std;
void changeSentences()
{
    string s,s1;
     s="Did you clean up your room?yiu cleaned up your room.";
    cout<<"Input sentences:"<<s<<endl<<endl<<endl;
    cout<<"Output sentences"<<endl<<endl;
    s1=s.erase(0,1);
    cout<< s1.insert(0,"D")<<endl;
}
int main()
{
    changeSentences();
system ("pause");    
return 0;
}
