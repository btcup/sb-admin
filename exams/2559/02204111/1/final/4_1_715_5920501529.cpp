#include<iostream>
#include<string>
using namespace std;

string encryption(string str)
{
   int i,j; 
   string x;
   for(i=str.size();i<=str.size();i--)
   {
                         
      cout<<str[i]; 
     
   }
   
}


int main()
{
    string str; 
    cout<<"Enter text: ";
    getline(cin,str,'\n');
    cout<<"Encrypted text: ";
    encryption(str);
    cout<<endl;
    
    
    system("pause");
    return 0;
}
