//5620500373 Amnat Chairawong
#include <iostream>
using namespace std;
int main ()
{
  string s,n,b,v;
  int i;
  cout<<"Please input your sentenee:";                   
  getline(cin,s,'\n');
  for(i=0;i<s.length();i++)
  {
  if(i==0)
  b=s[i];
  }
  cout<<"passive :"<<" The "<<v<<" is "<<n<<" by "<<b<<"."<<endl;                
system ("pause");
return 0;
}
