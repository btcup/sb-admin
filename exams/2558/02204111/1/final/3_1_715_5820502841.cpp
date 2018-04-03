#include <iostream>
using namespace std;
int pos=0,i,j;
string Encoding(string st){
    for(i=0;i<st.length();i++){
    pos=st.find("a",pos);
    if(pos==-1)break;
    st.replace(pos,1,"#141");}
    pos=0;
    for(i=0;i<st.length();i++){
    pos=st.find("e",pos);
    if(pos==-1)break;
    st.replace(pos,1,"#145");}
    pos=0;
    for(i=0;i<st.length();i++){
    pos=st.find("i",pos);
    if(pos==-1)break;
    st.replace(pos,1,"#151");}
    pos=0;
    for(i=0;i<st.length();i++){
    pos=st.find("o",pos);
    if(pos==-1)break;
    st.replace(pos,1,"#157");}
    pos=0;
    for(i=0;i<st.length();i++){
    pos=st.find("u",pos);
    if(pos==-1)break;
    st.replace(pos,1,"#165");}
    return st;
}
int main(){
    string st;
    cout<<"Please enter your message : ";
    getline(cin,st,'\n');
    cout<<"Your encoding message : ";
    cout<<Encoding(st)<<endl;
    system("pause");
    return 0;
}
