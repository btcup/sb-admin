#include<iostream>
using namespace std;

double CountThe(string s,string w){
       int n=0,n1,n2,n3;
       string w2="The ",w3="THE ";
       do{
       n1=s.find(w,0);
       n2=s.find(w2,0);
       n3=s.find(w3,0);
       if(n1>-1){
                 n=n+1;
                 s.erase(n1,3);
                 }
       else if(n2>-1){
                 n=n+1;
                 s.erase(n2,3);
                 }
       else if(n3>-1){
                 n=n+1;
                 s.erase(n3,3);
                 }               
}while(n1!=-1||n2!=-1||n3!=-1);
    return n;
       } 
int main(){
    string s,w="the ";
    cout<<"Enter your sentence : ";
    getline(cin,s,'\n');
    cout<<"There are "<<CountThe(s,w)<<" words of 'the'."<<endl;
    
    
    
    system("pause");
    return 0;
    }
