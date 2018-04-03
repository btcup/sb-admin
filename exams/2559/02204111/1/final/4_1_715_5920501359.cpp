#include<iostream>
using namespace std;

string encrypted(string s)
{
     int b;
     b= s.size();
     string a,c;
     for(int i=0;i<b;i++)
     {
          a[b-1-i] = s[i] ;  
     }
     return a;
}

int main()
{
    int i;
    string s,a,b;
    cout<<"Enter text : ";
    getline(cin,s,'\n');
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            b =  s.substr(0,s.find(' '));
            cout<<b<<endl;
            for(int j=0;j<a.size();j++)
                  cout<<a[j];    
            s = s.erase(0,s.substr(0,i).size()+1);
            i = 0;
        }
    }

    system("pause");
    return 0;

}
