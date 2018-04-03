#include<iostream>
using namespace std;

int main()
{
    int i;
    string str,str1,str2;
    cout<<"Can I help you : ";
    cin>>str;
    cout<<"What text : ";
    cin>>str1;
    cout<<"What word : ";
    cin>>str2;
    getline(cin,str(),'/n');
    
   
    if(str.find('couth'))
    {
    cout<<"It is "<<str2.length()<<endl;
    }
    
    if(str.find('delete'))
    {
    cout<<"New text is "<<str1.elser(str2)<<endl;
    }   
    else
    cout<<endl;

system("pause");
return 0;
}
