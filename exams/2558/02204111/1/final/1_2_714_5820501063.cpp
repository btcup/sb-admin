#include<iostream>
using namespace std;

void changeSentences(string s)
{
    int i,j,x,y;
    string a;
    x=s.find(".",0);
    y=s.find("?",0);
    if(x>=0)
    {
             if(s[x+1]=='a')
            s=s.replace((x+1),1,"A");
             else if(s[x+1]=='b')
            s=s.replace((x+1),1,"B");
             else if(s[x+1]=='c')
            s=s.replace((x+1),1,"C");
             else if(s[x+1]=='d')
            s=s.replace((x+1),1,"D");
             else if(s[x+1]=='e')
            s=s.replace((x+1),1,"E");
             else if(s[x+1]=='f')
            s=s.replace((x+1),1,"F");
             else if(s[x+1]=='g')
            s=s.replace((x+1),1,"G");
             else if(s[x+1]=='h')
            s=s.replace((x+1),1,"H");
            else if(s[x+1]=='i')
            s=s.replace((x+1),1,"I");
             else if(s[x+1]=='j')
            s=s.replace((x+1),1,"J");
             else if(s[x+1]=='k')
            s=s.replace((x+1),1,"K");
             else if(s[x+1]=='l')
            s=s.replace((x+1),1,"L");
             else if(s[x+1]=='m')
            s=s.replace((x+1),1,"M");
             else if(s[x+1]=='n')
            s=s.replace((x+1),1,"N");
             else if(s[x+1]=='o')
            s=s.replace((x+1),1,"O");
             else if(s[x+1]=='p')
            s=s.replace((x+1),1,"P");
             else if(s[x+1]=='q')
            s=s.replace((x+1),1,"Q");
             else if(s[x+1]=='r')
            s=s.replace((x+1),1,"R");
             else if(s[x+1]=='s')
            s=s.replace((x+1),1,"S");
             else if(s[x+1]=='t')
            s=s.replace((x+1),1,"T");
             else if(s[x+1]=='u')
            s=s.replace((x+1),1,"U");
             else if(s[x+1]=='v')
            s=s.replace((x+1),1,"V");
             else if(s[x+1]=='w')
            s=s.replace((x+1),1,"W");
             else if(s[x+1]=='x')
            s=s.replace((x+1),1,"X");
             else if(s[x+1]=='y')
            s=s.replace((x+1),1,"Y");
             else if(s[x+1]=='z')
            s=s.replace((x+1),1,"Z");
              
             
              
             
    }
     if(y>=0)
    {
            if(s[y+1]=='a')
            s=s.replace((y+1),1,"A");
             else if(s[y+1]=='b')
            s=s.replace((y+1),1,"B");
             else if(s[y+1]=='c')
            s=s.replace((y+1),1,"C");
             else if(s[y+1]=='d')
            s=s.replace((y+1),1,"D");
             else if(s[y+1]=='e')
            s=s.replace((y+1),1,"E");
             else if(s[y+1]=='f')
            s=s.replace((y+1),1,"F");
             else if(s[y+1]=='g')
            s=s.replace((y+1),1,"G");
             else if(s[y+1]=='h')
            s=s.replace((y+1),1,"H");
            else if(s[y+1]=='y')
            s=s.replace((y+1),1,"Y");
    }
    cout<<s;
}
int main()
{
    string s;
    cout<<"Input sentences : ";
    getline(cin,s,'\n');
    cout<<"Output sentences : "<<endl;
    changeSentences(s);
    system("pause");
    return 0;
} 
