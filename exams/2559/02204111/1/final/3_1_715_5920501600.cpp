//5920501600 Pawanrat Chokchaimadon
#include<iostream>
using namespace std;
void mysearch(string s,string r)
{    
     int n=0,sum=0;
     if(r.find('*',0)==0)
     cout<<"Incorrect keyword!"<<endl;
     else
     {
     for(int i=0;i<r.length();i++)
     {
        if(r[i]=='*')
        { sum++;
        continue;}
        n=s.find(r[i],n);  
        if(n!=-1)
        sum=sum+1;
     }
    if(sum==r.length())
    cout<<"'"<<r<<"'"<<"is in above text. "<<endl;
    else
    cout<<"'"<<r<<"'"<<"is not in above text. "<<endl;
     }
}
int main()
{
    string s,r;
    cout<<"Enter text : ";
    getline(cin,s,'\n');
    cout<<"Enter keyword : ";
    getline(cin,r,'\n');
    mysearch(s,r);
    system("pause");
    return 0;
}
