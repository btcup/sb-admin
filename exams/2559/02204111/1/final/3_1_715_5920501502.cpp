#include <iostream>
using namespace std;
int mySearch(string a, string b)
{
    string x,y,z,c;
    c=b;
    if (b[0]=='*')
    {cout<<"Incorrect keyword"<<endl;}
    else if (a.find(b,0)!=-1)
    {cout<<"'"<<c<<"' is in above text."<<endl;}
    else if (a.find(b,0)==-1 && b.find('*',0)==-1)
    cout<<"'"<<b<<"' is not in above text."<<endl;
    else if (b.find('*',0)!=-1)
    {int i,j,p,q;
    i=a.find(b[0],0);
    j=a.find(' ',i);
    x=a.substr(i,j-1);
    y=c;
    z=x;
    for(p=0;c.find('*',0)!=-1; )
    { i=c.find('*',0);
    y=c.erase(i,1);
    z=x.erase(i,1);
    }
    //cout<<y<<endl;
    //cout<<z<<endl;
    if (z.find(y,0)!=-1) cout<<"'"<<b<<"' is in above text."<<endl;
   else //if (z.find(y,0)!=-1)
   cout<<"'"<<b<<"' is not in above text."<<endl;
 //else 
 //{cout<<"'"<<c<<"' is not in above text."<<endl;}
    
    }
    
    
    
    return 0;
}

int main()
{
    string text,keyword;
    cout<<"Enter text: ";
    getline(cin,text,'\n');
    cout<<"Enter keyword: ";
    cin>>keyword;
    mySearch(text,keyword);
    
    system ("pause");
    return 0;
    
}
