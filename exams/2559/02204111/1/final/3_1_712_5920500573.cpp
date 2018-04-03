//5920500573 kornchawan klumem
#include<iostream>
using namespace std;
void mySearch(string str1,string str2){
    int x,y;
    x=str1.find(str2,0);
    y=str2.find('*',0);
    if(y==0)
    cout<<"Incorrect keyword!"<<endl;
    if(x>=0&&y!=0)
    cout<<"'"<<str2<<"'"<<" "<<"is in above text."<<endl;
    if(x<0&&y!=0)
    cout<<"'"<<str2<<"'"<<" "<<"is not in above text."<<endl;
    }
                
int main(){
    string str1,str2;
    int x,y;
    cout<<"Enter text :";
    getline(cin,str1,'\n');
    cout<<"Enter keyword :";
    getline(cin,str2,'\n');
    mySearch(str1,str2);
   
    system("pause");
    return 0;
}
    
