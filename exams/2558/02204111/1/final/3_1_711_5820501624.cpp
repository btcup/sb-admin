#include<iostream>
using namespace std;
void encoding(char s)
{int j;
for(j=0;j<1000;j++)
{
   if (s[j]=='a') cout<<"#141";
   else if(s[j]=='e') cout<<"#145";
   else if(s[j]=='i') cout<<"#151";
   else if(s[j]=='o') cout<<"#157";
   else if(s[j]=='u') cout<<"#165";
   else cout<<s[j];
}
 }

int main()
{int i;char s[i];      
cout<<"Please enter your message :";
for(i=0;i<1000;i++)
{cin>>s[i];}
 encoding(s); 
system("pause");
return 0;
}
