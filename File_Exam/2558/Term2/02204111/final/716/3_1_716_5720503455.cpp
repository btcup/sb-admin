#include<iostream>
#include<string>
using namespace std;
string t,w,a,b;
int x,y;

int Count()
{
cout<<"What text : ";
getline(cin,t,'\n');
cout<<"What word : ";
getline(cin,w,'\n');
for(int i =0;i<t.length();i++)
{
        if(t[i]==' '){t.erase(i,1);}
        else if(t.find(w)!=-1)
        {y++;
        t.erase(0,w.length());
        }
}

return y;
}

string Remove()
{
cout<<"What text : ";
getline(cin,t,'\n');
cout<<"What word : ";
getline(cin,w,'\n');
for(;;)
{
if(t.find(w)!=-1){a=t.erase(t.find(w),w.length());}   
else break;
}

return a;       
}

int main()
{
    string s;
    for(;;)
{
    cout<<"Can I help you? : ";
    getline(cin,s,'\n');
    if(s.find("count")!=-1&&s.find("delete")!=-1){continue;}
    
     else if(s.find("count")!=-1&&s.find("delete")==-1)
    {
    x=Count();
    cout<<"It is "<<x<<endl;
    break;
    }
     
     else if(s.find("count")==-1&&s.find("delete")!=-1)
    {
    b=Remove();
    cout<<"Next text is "<<b<<endl;
    break;
    }
     
     else continue;
     
}
    system("pause");
    return 0;
        
}
