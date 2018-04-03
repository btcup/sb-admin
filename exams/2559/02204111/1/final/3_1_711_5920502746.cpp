//5920502746 Thanachit Panichakij
#include<iostream>;
#include<string>;
using namespace std;
int main()
{
    int i,n;
    string A,B;
    cout<<"Enter text: ";
    getline(cin,A,'\n');
    cout<<"Enter keyword: ";
    getline(cin,B,'\n');
    i=A.find(B,0);
    if(i==-1)
    {
        cout<<"'"<<B<<"'"<<" is not in above text."<<endl;
    }
    else
    {
        cout<<"'"<<B<<"'"<<" is in above text."<<endl;
    }
    
    
system("pause");
return 0;


}

