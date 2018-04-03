#include<iostream>
using namespace std;
void mySearch(string a,string b)
{
     int n=-1,m=-1,i,j=0;
     string c;
     if(b[0]=='*'){cout<<"Incorrect keyword"<<endl;}
     else{
          c=b.substr(0,b.length());
          for(i=0;i<b.length();i++){
          m=b.find('*',1);
          if(m!=-1)
          {
                   b.erase(m,1);
          }
          }
          n=a.find(b,0);
          if(n!=-1){cout<<"'"<<c<<"'"<<" is in above text."<<endl;}
          else{cout<<"'"<<c<<"'"<<" is not in above text."<<endl;}
         } 
}
int main(){
    string a,b;
    cout<<"Enter text: ";
    getline(cin,a,'\n');
    cout<<"Enter keyword: ";
    getline(cin,b,'\n');
    mySearch(a,b);
    system("pause");
    return 0;
    }
