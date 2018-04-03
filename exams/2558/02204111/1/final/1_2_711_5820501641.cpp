#include <iostream>
using namespace std;


void changeSentences(string str)
{
     cout<<"Output sentences:"<<endl;
     cout<<endl;
     if(str[0]>=97&&str[0]<=122)
     {
                               str[0]=str[0]-32;
                               }
     for(int i=0;i<str.size();i++)
     {
             if(str[i]=='.'||str[i]=='?')
             {
                                         if(str[i+1]==' ')
                                         {
                                                        str[i+2]=str[i+2]-32;
                                                        }
                                         if(str[i+1]>=97&&str[i+1]<=122)
                                         {
                                                                        str[i+1]=str[i+1]-32;
                                                                        }
                                         }
             }                          
     cout<<str<<endl;
     }
     

int main()
{
    string str;
    cout<<"Input sentences: ";
    getline(cin,str,'\n');
    cout<<endl;
    cout<<endl;
    cout<<endl;
    changeSentences(str); 
    
    system("pause");
}
