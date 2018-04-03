#include <iostream>
using namespace std;

void changeSentences(string sen){
                       int i,n=sen.length();
                       for(i=0;i<n;i++){
                                        if(sen[i]=='?'){
                                                        sen.replace(i+1,1,"Y");}
                                        }
                       cout<<sen<<endl;
                                        }
                                                        
                                        

int main(){
    string sen;
    cout<<"Input sentences: ";
    getline(cin,sen,'\n');
    cout<<endl;
    cout<<endl;
    cout<<"Output sentences : ";
    cout<<endl;
    changeSentences(sen);
    system("pause");
    return 0;
}
