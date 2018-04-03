//5920502878
#include <iostream>
using namespace std;
void ToActive(string s)
{
     string n;
     int a;
     a=s.size();
     if(!(s.find("is",0)==a||s.find("is",0)<=a))
     {
       cout<<"Error: Verb to be (is) not found"<<endl;
      
     } 
     int b,c,d,f,g;
     if(s.find("is",0)>=a||s.find("is",0)<=a)
     {
     b=s.find("by",0);
     g=b+3;
     f=(a-(b+3))-1;
     n=s.substr(g,f)+" ";
     c=s.find("is",0);
     c=c+3;
     b=b-3;
     n=n+s.substr(c,b-c)+"s"+" ";
     
     d=c-4;
     n=n+s.substr(0,d)+".";
     cout<<endl;
     cout<<"active:"<<n<<endl;
     }
     
}
int main()
{
     string s;
     cout<<"Please input your sentence:";
     getline(cin,s,'\n');
     ToActive(s);
     system ("pause");
     return 0;
}
