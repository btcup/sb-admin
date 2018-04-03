#include<iostream>
using namespace std;
char Encoding(string s)
{
       char a,e,i,o,u;
       if(a==#141){
       s.replace(a,1,#141)}
       else(e==#145){
       s.replacs(e,1,#145)}
       else(i==#151){
       s.replace(i,1,#151)}
       else(o==#157){
       s.replace(o,1,#157)}
       else(u==#165){
       s.replace(u,1,#165)}
       return
}
int main(){
    char encoding;
    int x,y;
    cout<<"Please enter your message : ";
    cin>>x;
    cout<<"Your enconding message is : "<<y;
    cout<<endl;
    return 0;
    system("pause")
}
    
    
    

