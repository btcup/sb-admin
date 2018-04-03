#include<iostream>
using namespace std;
void Encoding(string s){
     for(int i=0;i<s.size()-1;i++){
             if(s[i]=='a')s.replace(i,1,"#141");
             if(s[i]=='e')s.replace(i,1,"#145");
             if(s[i]=='i')s.replace(i,1,"#151");
             if(s[i]=='o')s.replace(i,1,"#157");
             if(s[i]=='u')s.replace(i,1,"#165");
             }
             cout<<s<<endl;
     }
int main(){
    string r;
    cout<<"Please enter your message:";
    getline(cin,r,'\n');
    cout<<"Your encoding message is:";
    Encoding(r);                             
system("pause");
return 0;
}
