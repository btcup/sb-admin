//5920501642 patcharawan chaowanitkul 
#include <iostream>
using namespace std;
void mySearch (string a,string b)
{
     
     if (b.find("*")==0) cout << "Incorrect keyword!"<<endl;
     else if (a.find(b)>=0&&a.find (b)<= a.size()) cout <<"'"<< b <<"'"<<" is in above text. "<<endl;
     else cout <<  b <<" is not in above text. "<<endl;
}
int main()
{
    string a,b;
    cout <<"Enter text : ";
    getline (cin,a,'\n');
    cout <<"Enter keyword : ";
    cin>>b;
    mySearch (a,b);
    
    system ("pause");
    return 0;
}
    
    
