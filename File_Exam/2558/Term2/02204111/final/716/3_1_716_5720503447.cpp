#include <iostream>
using namespace std;
int main()
{
   string str1,str2,str3;
   cout<<"Can I help you?:  ";
   cin>>str1;
   if(str1=="count"||str1=="delete")
   {cout<<"What text :" ;
   cin>>str2;}
   else 
   {cout<<"Can I help you:";
   cin>>str1;}
 cout<<"What word :";
  cin>>str3;
 if(str1=="count")
 { cout<<"It is"<<str3.length(); } 
 else
 cout<<"New text is >>"<<str3.erase(0,2);
 system("pause");
 return 0;
}

