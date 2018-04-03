//5920551305 Khanoot somboonpanya;
#include<iostream>
using namespace std;
string ToPassive(string s1)
{
    string s2,s3,s4,s5,s6;
    int i=0;
     s2="the";
     for(i=0;i<s1.size();i++)
     {
            s3.substr(s1.find(s2,0),3);
                        cout<<s3;     
                             }
     
     
     
     
     }

int main()
{
   string s1,s2,s3,s4,s5,s6;
   cout<<"Please input your sentnce:";
   getline(cin,s1,'\n');
   
    ToPassive(s1);
    
    
    system("pause");
    return 0;     
    }
