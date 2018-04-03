#include<iostream>
using namespace std;

double Encoding(string s);

   
          if(s=='a')
          {
                    return #141;}
          if(s=='e')
          {
                    return #145;}
          if(s=='i')
          {
                    return #151;}
          if(s=='o')
          {
                    return #157;}
          if(s=='u')
          {
                    return #165;}
 return 0;
          
int main()
{
 int i=0;
 char a,t;
 string s;
 cout<<"Please enter your message :";
 cin>>s;
 cout<<"Your encoding message is:";
 for(i=0;i<s.length();i++)
 string e[i];
 {
                          
                          if(e[i]=='a')
                          {
                                t=Encoding(e[i]);}
                                cout<<t;
                          if(e[i]=='e')
                          {
                                t=Encoding(e[i]);}
                                cout<<t;
                          if(e[i]=='i')
                          {
                                t=Encoding(e[i]);}
                                cout<<t;
                          if(e[i]=='o')
                          {
                                t=Encoding(e[i]);}
                                cout<<t;
                          if(e[i]=='u')
                          {
                                t=Encoding(e[i]);} 
                                cout<<t;
                          if(e[i]!='a'&&e[i]!='e'&&e[i]!='i'&&e[i]!='o'&&e[i]!='u')
                          {
                                cout<<e[i];
                                }
                                }                      
 
 system("pause");
 return 0;
}
