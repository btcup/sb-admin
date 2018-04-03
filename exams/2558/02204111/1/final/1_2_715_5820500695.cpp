#include <iostream>
using namespace std;

string changeSentences(string s)
{
       s.find (s,0);
       aa=s.find (s,0);
       if (aa=='a') 
       s.replace (aa,'A',0);
       cout<< s;('.',0);
       
       
       
       
       
       
       return 0; 
}

int main()
{
    string s;
    cout<< "Input sentences: ";
    getline (cin, s, '\n');
    cout<< "Output sentences: \n\n";
    changeSentences(s);
    
    
    
    
    system ("pause");
    return 0;   
}
       

