#include<iostream>
using namespace std;
string s1,s2;
void Encoding(string s)
{
     
                      s1=s.find('a',0);
                      cout << s1;         
                      
} 
int main()
{
    string s;
    cout << "Please enter your message: ";
    cin >> s;
    cout << "Your encording message is: " ;
    Encoding(s);
    cout << endl;
    system ("pause");
    return 0;
}
    
