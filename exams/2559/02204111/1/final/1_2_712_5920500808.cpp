//5920500808   Pikhanet    Attasuriyakun
#include <iostream>
using namespace std;
void ToAction(string s){
    string strV,strS,strO;
       if(s.find("is",0) != -1){
          strS=s.substr(0,s.find("is",0));
          strV=s.substr(s.find("is",0)+2,s.find("ed",0)-s.find("is",0));
          strV=strV.replace(strV.length()-2,2,"s");
          strO=s.substr(s.find("by",0)+3,s.find(".",0)-(s.find("by",0)+3));
          cout << strO << strV << " " << strS << "." <<endl;
       }
       else if (s.find("is",0)== -1){
          cout << "Error : Verb to be (is) not found. " <<endl;}
       }
int main(){
    string str,str1;
    cout << "Please input your sentence : ";
    getline(cin,str,'\n');   
    ToAction(str);
    system ("pause");
    return 0;
} 
