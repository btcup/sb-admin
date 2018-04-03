#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Please enter your message:";
    getline(cin,s,'\0');
    for(int i=0;i<s.size();i++)
    {
            if(s[i]=='a')
            s.replace(i,1,#141);
            else if(s[i]=='e')
            s.replace(i,1,#145);
            else if(s[i]=='i')
            s.replace(i,1,#151);
            else if(s[i]=='o')
            s.replace(i,1,#157);
            else if(s[i]=='u')
            s.replace(i,1,#165);
    }
    cout<<s<<endl;
    system ("pause");
    return 0;
}

    
    
    
    
